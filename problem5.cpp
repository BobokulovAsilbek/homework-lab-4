//Bobokulov Asilbek 230092 FCS1
//CS 111 Data Structures and Algorithms
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *next;
    Node(){
        value = 0;
        next = NULL;
    }
    Node(int val){
        value = val;
        next = NULL;
    }
};
class LinkedList{
    Node *head;
public:
    LinkedList(){
        head = NULL;
    }
    LinkedList(int val){
        Node *newNode = new Node(val);
        if(head == NULL) head = newNode;
    }
    void insertNode(int val){
        Node *newNode = new Node(val);
        if(head == NULL) head = newNode;
        else{
            Node *tmp = head;
            while(tmp -> next != NULL) tmp = tmp -> next;
            tmp -> next = newNode;
        }
    }
    void Ascending(){
        Node *tmp = head;
        while(tmp -> next != NULL){
            Node *imp = tmp -> next;
            while(imp != NULL){
                if(imp->value < tmp->value) swap(imp->value, tmp->value);
                imp = imp->next;
            }
            tmp = tmp->next;
        }
    }
    void DeleteDuplicate(){
        Node *tmp = head;
        while(tmp -> next != NULL){
            Node *imp = tmp-> next;
            while(imp != NULL && imp -> value == tmp->value) imp = imp->next;
            if(imp == NULL) tmp->next = NULL;
            else{ tmp->next = imp; tmp = tmp->next; }
        }
    }
    void Printing(){
        Node *tmp = head;
        while(tmp != NULL){
            cout << tmp->value << ' ';
            tmp = tmp -> next;
        }
    }
};
int main()
{
    LinkedList List;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        List.insertNode(x);
    }
    List.Ascending();
    List.DeleteDuplicate();
    List.Printing();
}
