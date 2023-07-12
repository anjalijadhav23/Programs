#include<iostream>
using namespace std;

template <class T> 
T Addition(T i, T j)
{
    T ans;
    ans=i+j;

    return ans;
}
int main()
{
    double ret=0.0, a=11.9, b = 10.1;
    ret=Addition(a,b);

    cout<<"Addition is:"<<ret<<"\n";

    int iret=0, x=11, y= 10;
    iret=Addition(x,y);

    cout<<"Addition is:"<<iret<<"\n";

    char cret='\0', m='A', n= 'B';
    cret=Addition(m,n);

    cout<<"Addition is:"<<cret<<"\n";

    return 0;
}