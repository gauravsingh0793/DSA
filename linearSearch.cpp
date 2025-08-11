#include<iostream>
using namespace std;

bool search(int array[], int size, int key){
    for(int i=0; i<size; i++){
        if(array[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int array[10] = { 7,4,2,1,9,8,6,3,12,15};

    cout << "enter the element for search" << endl;
    int key;
    cin >> key;

    bool found = search(array, 10, key); // search function ke return ans found me store hoga.
    
    if (found){          // we can also write like this search(array, 10, key)
        cout << "key is present";
    }
    else{
        cout << "key is not present";
    }
    
}