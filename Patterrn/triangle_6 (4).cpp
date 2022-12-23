// 1111
// -222
// --33
// ---4

#include <iostream> 
using namespace std;
int main()
{
    cout<<"Enter a  number";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int no=n-i+1;
        while(no){
            cout<<i;
            no--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}