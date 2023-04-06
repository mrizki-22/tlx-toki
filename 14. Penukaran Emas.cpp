#include <iostream>
using namespace std;

int func(int n){
    if(n>=n/2+n/3+n/4){
         return n;
    } else {
         return func(n/2)+func(n/3)+func(n/4);
    }
}

int main(){
    int n;
    cin >> n;
    cout << func(n);
    
}