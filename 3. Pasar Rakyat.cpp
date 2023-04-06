#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n;

    int arr[n]; // menampung hari pedagang ke-i
    for(int i = 0; i < n; i++){
        cin >> m;
        arr[i] = m;
    } 
    
    int size = *(&arr + 1) - arr; //size array
    int result = 0;
    bool stop = 0;
    while(!stop) {
        result++;
        for(int i = 0; i < size; i++){
            if(result % arr[i] !=0){
                break;
            }
            if(i == size - 1){
                stop = 1;
                cout << result;
            } 
        }
    }
}