#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    string arr[num];
    int ans=0;
    for(int i=0;i<num;i++) cin >> arr[i];
    for(int i=1;i<num;i++) if(arr[i]!=arr[i-1]) ans++;
    cout << ans+1 << endl;
}