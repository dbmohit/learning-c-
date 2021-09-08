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

    
    float num;
    cin>>num;
    for (float j = 1;num>=j;j++){
        double coef = factorial(num)/(factorial(j)*factorial(num - j));
        cout<<coef<<endl;

    }


    return 0;
}
