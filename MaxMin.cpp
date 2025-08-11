#include<iostream>
#include<climits>
using namespace std;


// Maximum value

int getMax(int num[], int n){

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){

        maxi = max(maxi, num[i]); // predefine function to find maximum
        // if(num[i] > max){
        //     max = num[i];
        // }
        
    }
    return maxi;
}



int getMin(int num[], int n){

    int mini = INT_MAX;

    for(int i=0; i<n; i++){

        mini= min(mini, num[i]); // predefine function to find minimum number.

        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    return mini;
}


int main(){

    int size;
    cin >> size;

    int num[100];

    for(int i=0; i<size; i++){
        cin >>  num[i];
    }

    cout << "maximum value of array is: " << getMax(num, size) << endl;
    cout << "minimum value of array is: " << getMin(num, size) << endl;

    return 0;
}