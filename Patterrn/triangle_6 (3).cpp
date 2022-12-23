// ***** n-1+1=n
// -**** n-2+1=n-1
// --*** n-3+1=n-2
// ---** n-4+1=n-3
// ----* n-5+1=n-4

     
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        // Enter spaces
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //Enter *
        int star=n-i+1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
     
     