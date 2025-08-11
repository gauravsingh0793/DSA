#include<iostream>
using namespace std;


int power(){

    int a, b;
    cout << "enter a no a" <<endl;
        cin >> a;

        cout << "enter a no b" << endl;
        cin >> b;
    
    int ans =1;

        for(int i=1; i<=b; i++){

            ans = ans * a;
        }
        return ans;

        cout << ans;
    }

int main(){

        int answer = power();
        cout << "answer is:" << answer << endl;

         int ans = power();
        cout << "answer is:" << ans << endl;  // call same function again.



        return 0;
    
}