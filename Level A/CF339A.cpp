#include <bits/stdc++.h>
using namespace std;

int main(){
    int one=0,two=0,three=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i+=2){
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else three++;
    }
    int i=0;
    while(one--){
        s[i] = '1';
        i+=2;
    }
    while(two--){
        s[i] = '2';
        i+=2;
    }
    while(three--){
        s[i] = '3';
        i+=2;
    }
    cout << s << endl;
}