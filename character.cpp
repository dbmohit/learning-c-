#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    cin >> a;
    char c[1] = "e";
    int count = 0;
    int len = a.length();
    for(int i = 1;len>=i;i++){
        if (a[i] == "e"){
            count++;
        }

    }
    cout<<count;

    return 0;
    
}
