#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    string s[num];
    for(int i=0;i<num;i++){
        cin >> s[i];
        if(s[i].length()>10) cout << s[i][0] + to_string(s[i].length()-2) + s[i][s[i].length()-1] << endl;
        else cout << s[i] << endl;
    }
}