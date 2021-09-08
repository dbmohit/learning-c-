#include <iostream>
using namespace std;

int main(){

   int a = 5;
   int *p;
   p = &a;
   cout<<"location of a "<< endl << p <<endl;
   cout<<"location of a+1 "<< endl << p+5 <<endl;

    return 0;
}