//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>
void Display(int Arr[],int iSize)
{
    static int iCnt=0;

    if( iCnt < iSize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        Display(Arr,5);
    }
    
}


int main()
{
    int Brr[5]={10,20,30,40,50};

    Display(Brr,5);

    
    
    
    return 0;
}