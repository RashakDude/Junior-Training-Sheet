#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    int num=0;
    cin >> a >> b;
    while(a--){
        int x;
        cin >> x;
        if(x<=b) num += 1;
        else num+=2;
    }
    cout << num << endl;
}