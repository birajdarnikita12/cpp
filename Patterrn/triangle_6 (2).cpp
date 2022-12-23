//  *  *  *  * 
//  *  *  *
//  *  *
//  *

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=n;
//         while(j>=i){
            
//             cout<<" * ";
//             j=j-1;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// * * * * *
// * * * * 
// * * * 
// * * 
// *  
     
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=n-row+1;
        while(col){
            cout<<" * ";
            col=col-1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
    return 0;
}
     
     