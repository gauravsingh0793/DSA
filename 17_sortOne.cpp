#include<iostream>
using namespace std;

    void printArray(int array[], int n){
        for(int i=0; i<n; i++){
            cout << array[i] << " ";
        }
    }
    
     void sort(int array[], int n){

        int left = 0;
        int right = n-1;
      

        while(left < right){
           if(array[left] == 0 && left < right){
            left++;
           }
           else if(array[right] ==1 && left < right){
            right--;
           }
           else{ 
           swap(array[left], array[right]);
           left++;
           right--;
           }
        }

        
    }
int main(){
    
    int array[7] = {0,1,0,0,1,0,1};
    
    sort(array, 7);
    printArray(array, 7);


}