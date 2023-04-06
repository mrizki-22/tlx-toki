#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, highest = 0;
    cin >> n >> h;
    int j[n];

    for(int i = 0; i < n; i++){
        cin >> j[i];
        highest = max(highest, j[i]);
    }
    sort(j, j+n);

    for(int i = 0; i < n; i++){
        if(highest + j[i] >= h){
            cout << highest + j[i] << endl;
            break;
        }
    }

}