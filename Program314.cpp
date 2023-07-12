#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
    int iCnt=0;
    T Max=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]>Max)
       {
        Max=Arr[iCnt];
       }
    }
    return Max;
}

int main()
{
    int Datai[]={101,220,130,40};
    int iRet=Maximum(Datai,4); 
    cout<<"Maximum is : "<<iRet<<"\n" ;  

    float Dataf[]={10.1,11.2,21.3,51.4,50.4};
    float fRet=Maximum(Dataf,5);
    cout<<"Maximum is : "<<fRet<<"\n" ;    

    return 0;
}