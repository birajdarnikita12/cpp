//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 

#include <iostream> 
using namespace std;
int main()
{
    cout<<"Enter a  number";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // print spaces
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }
        // print 1st triangle
        int count=1;
        int no=i;
        while(no){
            cout<<count<<" ";
            count++;
            no--;
        }
        // print 2nd triangle
        int num=i-1;
        while(num){
            cout<<num<<" ";
            num--;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}


// #include <iostream> 
// using namespace std;
// int main()
// {
//     cout<<"Enter a  number";
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         // print spaces
//         int space=n-i;
//         while(space){
//             cout<<"  ";
//             space--;
//         }
//         // print 1st triangle
//         int j=1;
//         while(j<=i){
//             cout<<j<<" ";
//             j++;
//         }
//         // print 2nd triangle
//         int num=i-1;
//         while(num){
//             cout<<num<<" ";
//             num--;
//         }
        
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }