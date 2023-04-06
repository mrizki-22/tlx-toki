#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    cout << n / 3600 << endl;
    if(n / 3600 > 0)
        n %= 3600;

    cout << n / 60 << endl;
    if(n / 60 > 0)
        n %= 60;

    cout << n << endl;
}