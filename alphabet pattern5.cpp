#include<iostream>
using namespace std;


int main(){

    int n,i = 1;
    cin>>n;
    while(n>=i){
        char a = 'A' + i - 1;
        int j = 1;
        while(i>=j)
        {
            cout<<a++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
