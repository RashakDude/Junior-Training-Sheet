#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int res[t];
    for(int i=1; i<=t; i++) {
        int p;
        cin >> p;
        res[p-1] = i;
    }
    for(int i=0; i<t; i++) cout << res[i] << endl;
}