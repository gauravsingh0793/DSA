#include<iostream>

using namespace std;

int main(){

    //int score[5] = {200,180,211,247,295};

    //score[1] = {287};  // hum is tarh se value ko chage kar sakte hai.

    // index of array = size-1.
    // cout << score[0] << endl;
    // cout << score[1] << endl;
    // cout << score[2] << endl;
    // cout << score[3] << endl;
    // cout << score[4] << endl;
    
    // loop

int size = 5;
int score[size];

    for(int i=0; i<size; i++) {
        cin >> score[i];
    }

    for(int i=0; i<size; i++){
        cout << score[i] << endl;
    }
    return 0;

}