// A 
// B C 
// D E F 
// G H I J 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int i=1,count=0;
    while(i<=n){
        int j=1;
        while(j<=i){
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

