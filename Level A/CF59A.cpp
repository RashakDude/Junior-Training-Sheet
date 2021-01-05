#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int lower=0;
    for(int i=0;i<s.size();i++) if(s[i]>='a') lower++;
    int upper= s.size()-lower;
    upper > lower ? transform(s.begin(),s.end(),s.begin(),::toupper) : transform(s.begin(),s.end(),s.begin(),::tolower);
    cout << s << endl; 
}