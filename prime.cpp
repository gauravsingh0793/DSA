#include<iostream>
using namespace std;

// 1- prime 
// 0 - not prime.
bool isPrime(int n){

    for(int i=2; i<n; i++){

        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n ;

    cin >> n;

                    //we can also write like this -> bool found = isPrime(n);
                                //if(found){  } else {} 

    if (isPrime(n)){              
        cout << "Prime no";
    }
    else{
        cout << "NOt prime";
    }
}