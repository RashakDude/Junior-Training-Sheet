#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int a[num],b[num];
    int res=0;
    for(int i=0;i<num;i++) cin >> a[i] >> b[i];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++) if(a[i]==b[j]) res++;
    }
    cout << res << endl;
}