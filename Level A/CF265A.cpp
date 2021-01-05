#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int start=0;
    for(int i=0;i<s2.length();i++){
        if(s1[start]==s2[i]) start++;
    }
    cout << start+1;
}