#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    x = max(x,y);
    string s[6] = {"1/1","5/6","2/3","1/2","1/3","1/6"};
    cout << s[x-1];
}