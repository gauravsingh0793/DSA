#include<iostream>
#include<climits>

using namespace std;

int main(){
     
     int num[] = {12, 13, 45, -89, 67};
     int size = 5;
     int largest = INT_MIN;

     for(int i=0; i<size; i++){
        // if(num[i] > largest){
        //     largest = num[i];
        // }
        largest = max(num[i], largest);  // shortcut
     }
     cout << "The largest no is:" << largest << endl;

     return 0;
}