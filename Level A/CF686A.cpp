#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,d;
    cin >> n >> d;
    long long int count = 0;
    while(n--){
        char c;
        long long int m;
        cin >> c >> m;
        if(c=='-'){
            if(d>=m) d-=m;
            else count++; 
        }
        else d+=m; 
    }
    cout << d << " " << count;
}