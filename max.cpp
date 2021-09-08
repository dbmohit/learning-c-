#include <iostream>
using namespace std;

int main(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int arr[4] = {a,b,c,d};
    for (int i=0;i<4;i++){
        for (int j = 1;j<4;j++){
            if(arr[i]-arr[j]<0){
                cout<<arr[j];
            }
        }
    }
    return 0;
}