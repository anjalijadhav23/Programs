//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>
int AddArrR(int Arr[],int iSize)
{
    static int iCnt=0;
    static int Sum =0;

    if( iCnt < iSize)
    {
        Sum=Sum+Arr[iCnt];
        iCnt++;
        AddArrR(Arr,iSize);
    }
    return Sum;
}


int main()
{
    int Brr[5]={10,20,30,40,50};
    int iRet=0;

    iRet=AddArrR(Brr,5);
    printf("Addition is :%d\n",iRet);

    
    
    
    return 0;
}