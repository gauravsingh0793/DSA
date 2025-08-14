#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void swap(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[7] = {9,8,7,6,5,4,3};

    cout << "swaping the even array" << endl;

    swap(even, 8);
    printArray(even, 8);

    cout << endl;

    cout << "swaping the odd array" << endl;
    
    swap(odd, 7);
    printArray(odd, 7);

    return 0;

}