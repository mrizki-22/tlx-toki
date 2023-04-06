#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    long long int r;
    cin >> N >> K;

    for(int i = 0; i <= N ; i++){
        if(i > K){
            r *= 2;
        } else {
            r = i;
        }
        
    }
  cout << r;
}