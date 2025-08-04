#include<iostream>
using namespace std;

int main(){

    int a , b;
    char op;

    cout << "Enter a no a" << endl;
    cin >> a;

    cout << "Enter a no b" << endl;
    cin >> b;


    cout << "Enter a operation " << endl;
    cin >> op;

    cout << "ans:";

    switch(op){

        case '+': cout << (a + b) << endl;
        break;

        case '-': cout << (a - b) << endl;
        break;

        case '*': cout << (a * b) << endl;
        break;

        case '/': cout << (a / b) << endl;
        break;

        case '%': cout << (a % b) << endl;
        break;
    }
}