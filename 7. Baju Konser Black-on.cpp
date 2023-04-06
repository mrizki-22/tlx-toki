#include <iostream>

using namespace std;

int main(){
    int b, p, l;
    scanf("%d %d %d", &b, &p, &l);
    char ukuran[4] = {'S','M','L','X'};
    int B[4] = {10, 14, 18, 25};
    int P[4] = {40, 60, 80, 100};
    int L[4] = {90, 120, 180, 220};

    
    for(int i=0; i<4; i++){
        if(b > B[i] || p > P[i] || l > L[i]){
            if(i == 3)
                cout << "X" << endl;
                continue;
        }
        cout << ukuran[i];
        break;
    }
}
