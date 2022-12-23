// A B C 
// D E F 
// G H I 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int i=1, count=0;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+count;
            cout<<ch<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}