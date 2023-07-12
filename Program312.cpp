#include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[], int iSize)
{
    int iCnt=0;
    T ans;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        ans=ans+Arr[iCnt];
    }
    return ans;
}

int main()
{
    int Datai[]={10,20,30,40};
    int iRet=Addition(Datai,4); 
    cout<<"Addition is : "<<iRet<<"\n" ;  

    float Dataf[]={10.1,11.2,21.3,51.4,50.4};
    float fRet=Addition(Dataf,5);
    cout<<"Addition is : "<<fRet<<"\n" ;    

    return 0;
}