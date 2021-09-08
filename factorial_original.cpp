#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    
    for (int i = 2;n>=i;i++){
        fact = fact*i;
    }
    return fact;
    
}

int main(){

    
    int num;
    cin>>num;
    int ans = factorial(num);
    cout<<ans<<endl;


    return 0;
}
