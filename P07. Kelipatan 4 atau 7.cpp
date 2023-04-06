#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        int r = 0;
        cin >> n;
        for(long int i = 0; i < n;i++){
            if(i % 4 == 0 || i%7 == 0){
                r += i;
            }
        }
        cout << r << endl;
    }
}

