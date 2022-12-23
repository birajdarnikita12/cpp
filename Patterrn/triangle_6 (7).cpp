//        1 
//     2  3 
//   4 5  6 
// 7 8 9 10 

#include <iostream> 
using namespace std;
int main()
{
    cout<<"Enter a  number";
    int n;
    cin>>n;
    int i=1;
    int count=i;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }
        int no=i;
        while(no){
            cout<<count<<" ";
            count++;
            no--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}