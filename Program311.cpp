#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int iSize)
{
    int iCnt=0;

    for (iCnt=0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}


int main()
{
    int Datai[]={10,20,30,40};

    Display(Datai,4);

    char Datac[]={'a','b','c','d','e'};

    Display(Datac,5);

    return 0;
}