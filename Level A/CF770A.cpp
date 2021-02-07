#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<char> v;
    for(int i=97; i<97+m; i++){
        v.push_back(i);
        if(v.size()==n) break;
        else if(i==97+m-1) i=96;
    }
    for(auto x:v) cout << x;
}