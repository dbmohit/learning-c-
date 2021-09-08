#include <iostream>
using namespace std;
void binary(int n){
    while(n>=1){
        if(n%2 == 0){
            cout<<"0";
        }
        else {
            cout<<"1";
        }
        n = n/2;
    }
}
int main(){
    binary(5);



    return 0;
}