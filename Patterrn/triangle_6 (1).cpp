// ----*
// ---**
// --***
// -****
// *****
     
#include <iostream> 
using namespace std;
int main()
{
    cout<<"Enter a  number";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-1;
        while(space>=i){
            cout<<" - ";
            space--;
        }
        int star =1;
        while(star<=i){
            cout<<" * ";
            star++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
     
     