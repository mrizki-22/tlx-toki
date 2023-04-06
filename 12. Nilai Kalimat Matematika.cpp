#include <iostream>
using namespace std;

int main(){
    int a, b;
    char op;

    cin>>a>>op>>b;

    switch (op)
    {
    case '+':
        cout<< a + b;
        break;

    case '-':
        cout<< a-b;
        break;

    case '*':
        cout<< a*b;
        break;

    case '<':
        if(a < b)
            cout<< "benar";
        else
            cout<< "salah";
        break;

    case '>':
        if(a > b)
            cout << "benar";
        else 
            cout << "salah";
        break;
        
    case '=':
        if(a == b)
            cout << "benar";
        else
            cout << "salah";
        break;
    
    default:
        break;
    }
}