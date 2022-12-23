
#include <iostream> 
using namespace std;
int main()
{
    cout<<"Enter a  number";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // print 1st traingle
        int no=n-i+1;
        int count=1;
        while(no){
            cout<<count;
            count++;
            no--;
        }
        // print 2nd star traingle
        int star=i-1;
        while(star){
            cout<<"**";
            star--;
        }
        // // print 3rd star triangle
        // int st=i-1;
        // while(st){
        //     cout<<"*";
        //     st--;
        // } 
        // print 4th traingle
        int num=n-i+1;
        while(num){
            cout<<num;
            num--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}