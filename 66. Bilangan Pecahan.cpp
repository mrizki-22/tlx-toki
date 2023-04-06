#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,a,b;
    cin >> A >> B;

    for(int i = 2; i <= A; i++){
        if(A % i != 0 || B % i != 0)
            continue;
        a = A / i;
        b = B / i;
    }

    if(a == 0 || b == 0)
        cout << "Tidak";
    else cout << a << " " << b;
    
}