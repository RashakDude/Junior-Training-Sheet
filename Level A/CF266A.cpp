#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0;i<num-1;i++){
        if(s[i]==s[i+1]) ans++;
    }
    cout << ans << endl;
}