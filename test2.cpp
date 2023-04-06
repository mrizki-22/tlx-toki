#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char asal, char bantu, char tujuan){ // n = 4
    
    if(n==1){
        
        cout << " pindahkan piring dari " << asal << " ke "  << tujuan << endl;
        
    } else {
        hanoi(n-1, asal, tujuan, bantu); // 
        hanoi(1,asal,bantu,tujuan);
        hanoi(n-1,bantu,asal,tujuan);
    }
    
}

int main(){
    hanoi(4,'A','B', 'C');
}