//    1
//   22
//  333
// 4444

#include <iostream> 
using namespace std;
int main()
{
    cout<<"Enter a  number";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int no=i;
        while(no){
            cout<<i;
            no--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}