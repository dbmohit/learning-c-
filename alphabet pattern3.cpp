
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int m = n;
    int i  = 1;
    char l = 'A';
    while(n>=i){
        char p = l;
        
        int k = 1;
        while(n>=k){
            cout<<p;
            p=p+1;
            k = k + 1;
        }
        
        
        
        
        cout<<endl;
        i = i + 1;
        l = l + 1; 
    }
	return 0;
}
