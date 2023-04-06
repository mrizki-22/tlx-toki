#include <bits/stdc++.h>
using namespace std;

bool satuSaja(string a, string b){
    if(a.size() - 1 != b.size()){
        return false;
    }
    string A;
    for(int i = 0; i < a.size(); i++){
        A = a;
        A.erase(i,1);
        if(A == b)
            return true;
    }
    return false;
}

int main(){
    string a,b;
    cin >> a;
    cin >> b;
   
    if(satuSaja(a,b))
        cout << "Tentu saja bisa!";
    else cout << "Wah, tidak bisa :(";
}