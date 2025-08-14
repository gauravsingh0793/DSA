#include<iostream>
using namespace std;


int sumOfelement(int arr[], int n){
    int sum =0;
    for(int i=0; i<n; i++ ){
        sum = sum + arr[i];
    }

    return sum;
}

int main(){

    int size;
    cin >> size;

    int array[50];

        for(int i=0; i<size; i++){
            cin >>  array[i];
        }

        cout << "print the sum of element: " << sumOfelement(array, size) << endl;


        // simple method

        int array2[5] = {10,20,30,40,10};
        int sum =0;

        for(int i=0; i<5; i++){
            sum = sum + array2[i];
        }

        cout << "printing the sum of all elmement: " << sum;

}