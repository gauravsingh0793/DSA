#include<iostream>
using namespace std;

bool evenOdd(int a){
    if (a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

        int num;
        cin >> num;

        if (evenOdd(num)){
            cout << "Even no";      
        }
        else{
            cout << "odd no";
        }

}