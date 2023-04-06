#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, d;
    char c;

    cin >> k;
    cin >> c;
    cin >> d;

    for(int i = 1; i <= k; i++){

        for(int j = 1; j <= k; j++){
            if(i == 1 || i == k || j == 1 || j == k){
                cout << d;
            }else if(k % 2 == 1 && k/2 + 1 == i && k/2 + 1 == j){
                cout << '*';
            }else{
                cout << c;
            }
        }
        cout << endl;

    }
}