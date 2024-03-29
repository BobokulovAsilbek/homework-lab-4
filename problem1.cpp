//Bobokulov Asilbek 230092 FCS1
//CS 111 Data Structures and Algorithms
#include<bits/stdc++.h>
using namespace std;
class Leaf{
public:
    string msg;
    Leaf(){
        msg = nullptr;
    }
    Leaf(string msg){
        this->msg=msg;
    }
};
class Node{
public:
    int value;
    Node *left;
    Node *right;
    Leaf *leftL;
    Leaf *rightL;
    Node(int val){
        value=val;
        left=nullptr;
        right=nullptr;
        leftL=nullptr;
        rightL=nullptr;
    }
};
int main()
{
    Node *root = new Node(80);
    Node *l = new Node(54);
    Node *r = new Node(140);         r->rightL = new Leaf("Net");

    root->left = l;
    root->right = r;



    Node *l_l = new Node(49);           l_l->leftL = new Leaf("Victory"); l_l->rightL = new Leaf("Happy");
    Node *l_r = new Node(60);           l_r->leftL = new Leaf("55"); l_r->rightL = new Leaf("Flower");

    l->left = l_l;
    l->right = l_r;



    Node *r_l = new Node(104);           r_l->leftL = new Leaf("Power"); r_l->rightL = new Leaf("Vision");

    r->left = r_l;

    int n; cin >> n;
    Node *tmp = root;
    Node *last;
    while(tmp != nullptr){//|| tmp->right != nullptr){
        //cout << tmp->value << '\n';
        last = tmp;
        if(n <= tmp->value) tmp = tmp->left;
        else tmp = tmp->right;
    }

    cout << (n > last->value ? last->rightL->msg : last->leftL->msg);
}
