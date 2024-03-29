//Bobokulov Asilbek 230092 FCS1
//CS 111 Data Structures and Algorithms
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        int key = v[i], j = i - 1;
        while(j >= 0 && v[j] < key){
            v[j + 1] = v[j];
            j --;
        }
        v[j + 1] = key;
    }
}
int main()
{
    int n; cin >> n;
    vector<int> vec(n);
    for(auto &x:vec) cin >> x;
    insertionSort(vec);
    for(auto x:vec) cout << x << ' ';
}