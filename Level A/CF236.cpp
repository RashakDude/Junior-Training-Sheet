#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[26] = {0};
    for(int i=0;i<s.size();i++) arr[s[i]-'a']++;
    int t=0;
    for(int i=0;i<26;i++) if(arr[i]>0) t++;
    t%2==0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!"; 
}