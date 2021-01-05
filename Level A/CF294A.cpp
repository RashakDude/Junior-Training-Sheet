#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int x;
    cin >> x;
    while(x--){
        int a,b;
        cin >> a >> b;
        if(a==1) arr[1] += (arr[0]-b);
        else if(a==n) arr[n-2] += (b-1);
        else{
            arr[a-2] += (b-1);
            arr[a] += (arr[a-1]-b);
        }
        arr[a-1]=0;
    }
    for(int i=0;i<n;i++) cout << arr[i] << endl;
}