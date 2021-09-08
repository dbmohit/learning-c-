#include <iostream>
using namespace std;

void ars(int n) {
    int x = 0;
    int m = 1;
    for (int i = 1; n>=i;i++){
        int c = x + m;
        x = m;
        m = c;
        cout<<c<<endl;
    }
}
int main(){

    int num;
    cin>>num;
    ars(num);

 return 0;
}
