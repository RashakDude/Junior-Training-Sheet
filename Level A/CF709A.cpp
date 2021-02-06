#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,b,d;
    cin >> n >> b >> d;
    long long int arr[n];
    long long int sum = 0;
    for(long long int i=0;i<n;i++) cin >> arr[i];
    long long int res = 0;
    for(long long int i=0;i<n;i++){
        if(arr[i]>b) continue;
        sum += arr[i];
        if(sum>d){
            res++;
            sum=0;
        }
    }
    cout << res << endl;
}