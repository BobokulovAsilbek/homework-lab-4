//Bobokulov Asilbek 230092 FCS1
//CS 111 Data Structures and Algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> vec(n), bef, aft;
    for(auto &x:vec) cin >> x;
    int v, id; cin >> v;
    for(int i = 0; i < n; i++) if(vec[i] == v){ id = i; break; }
    for(int i = 0; i < n; i++) if(i > id) aft.push_back(vec[i]); else if(id > i) bef.push_back(vec[i]);
    sort(bef.rbegin(), bef.rend());
    sort(aft.begin(), aft.end());
    for(auto x:bef) cout << x << ' '; //cout << '\n';
    cout << v << ' ';
    for(auto y:aft) cout << y << ' ';
}
