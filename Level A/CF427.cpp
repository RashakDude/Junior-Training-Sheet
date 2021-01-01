#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int crime=0, cops=0;
    for(int i=0;i<num;i++){
        int t;
        cin >> t;
        if (t > 0) cops += t;
        if (t < 0 && cops > 0) cops--;
        else if (t < 0 && cops == 0) crime++;
    }
    cout << crime;
}