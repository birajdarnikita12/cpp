#include <iostream>
using namespace std;
void update(int *a,int *b) //400 500
{
    int temp=*a;//400
    *a=*a+*b;//400+500
    *b=temp-*b;//400-500
    if(*b<0)
    {
        *b=-(*b);
    }      
}

int main() {
    int a, b;//4,5
    int *pa = &a, *pb = &b;//400 500
    cout<<"enter two no"<<endl;
    cin>>a>>b;//4 5
        update(pa, pb);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
