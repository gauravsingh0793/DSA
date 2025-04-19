#include<iostream>
#include<climits>

using namespace std;

int main(){
    int num[] = {45,24,63,12,-16,78};
    int size = 6;
    int smallest = INT_MAX; // INT_MAX MEANS LARGEST POSTIVE VALUE.

    for(int i=0; i<size; i++){
        // if(num[i]<smallest){
        //     smallest = num[i];
        // }
        smallest =  min(num[i], smallest);
    }
    cout << "The smallest no is:" << smallest << endl;
    return 0;
}