// A B C 
// B C D 
// C D E 

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int count=i;
//         while(j<=n){
//             char ch='A'+count-1;
//             cout<<ch<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}