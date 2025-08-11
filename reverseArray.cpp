#include<iostream>
using namespace std;

void reverse(int array[], int size){

    int start =0;
    int end = size-1;
    while(start <= end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printarray(int array[], int size){

    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    } 
    cout << endl;
} 

int main(){

    int array1[6] = {9,8,7,6,5,4};
    int array2[5] = {1,2,3,4,5};

    reverse(array1, 6);
    reverse(array2, 5);

    printarray(array1, 6);
    printarray(array2, 5);


}