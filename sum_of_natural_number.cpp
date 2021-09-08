#include <iostream>
using namespace std;

int sum(int n){
    int total = 0;
    for (int i = 1;n>i;i++){
        total = total + i;

    }
    return total+n;

}
int main(){
    int num;
    cin>>num;
    int result = sum(num);
    cout<<result<<endl;


    return 0;
}
