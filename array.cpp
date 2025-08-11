#include<iostream>
using namespace std;

void printArray(int array[], int size){
    cout << "printing the array" << endl;
    for(int i=0; i<size; i++){
        cout << array[i] << " ";

    }
    cout << "printing done" << endl;
}

int main(){

    int number[5] = {1,5,2,6,9};
    cout << "array at index 2 is: " << number[2] << endl;

    // when we are not initialize the value of array it gives garbage value.
    int second[10];
    cout << "array at index 4 is: " << second[4]  << endl; 


    // when we initialize the index which is not present in index it also gives garbage value.
    int third[5] = {1,2,4,5,6};
    cout << "value at index 6 is: " << third[6] << endl;

    // when we initialize the value less then index it initialize remainder index with 0.
    int n =15;
    int fourth[15] = {0,3,5};

    printArray(fourth, 15);

    // we initialize the value 0 at entire index of array
    n =10;
    int fifth[10] ={0};
    printArray(fifth, 10);

    //find the size of array
    int sizeOffifth = sizeof(fifth)/sizeof(int);
    cout << "size of array is: " << sizeOffifth;


    char firstChar[5] = {'a','b','c','d','e'};
    cout << "printing the array" << endl;
    for(int i=0; i<5; i++){
        cout << firstChar[i] << " ";

    }
    cout << "printing done" << endl;


    // initialize all element of array with same value by loop
    
    int sixth[5];
    int value = 7;

    for(int i=0; i<5; i++){
        sixth[i] = value;
    }


    // printing the value 
    for (int i=0; i<5; i++){
        cout << sixth[i] << " ";
    } cout << endl;

    // initialize all element of array with same value by c++ STL

    int arr[5];
    fill(arr, arr + 5, 7);

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    
return 0;


}