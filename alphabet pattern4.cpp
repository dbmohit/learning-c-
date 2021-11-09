#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i = 1;
    cin>>n;
    char ch = 'A';
    while(n>=i){
        
        int j = 1;
        while(i>=j){
            cout<<ch;
            j = j + 1;
        }
        cout<<endl;
        ch = ch + 1;
        i = i + 1;
    }
    
}