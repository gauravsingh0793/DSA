#include<iostream>
using namespace std;

int update(int arr[], int n){
    arr[0] = {120};
    cout << " entering inside the function" << endl;
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    } cout << endl;

    cout << "going outside the function" << endl;
}



int main(){

    int arr[3] = {1,2,3};

    update(arr, 3);

    cout << "inside the main function" << endl;
    for(int i=0; i<3; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}