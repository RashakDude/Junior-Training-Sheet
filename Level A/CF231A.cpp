#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    int ans = 0;
    cin >> num;
    while(num--){
        int t=0;
        for(int i=0;i<3;i++){
            int x;
            cin >> x;
            t+=x;
        }
        if(t>=2) ans++;
    }
    cout << ans << endl;
}