#include <iostream>
using namespace std;

int main(){
    int n, d;
    scanf("%d %d", &n, &d);

    int m[n];
    int temp;
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }

    for(int i = 0; i < *(&m + 1) - m; i++){
        if(m[i] == d){
            cout << i;
            break;
        }
        if( i == (*(&m + 1)-m)-1)
            cout << -1;
    }
}