//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>

int CountDigitR(int No)
{
    static int iCnt =0;


    if(No!=0)
    {
        
        iCnt ++;
        No=No/10;
        CountDigitR(No);
    }
    return iCnt;
    
    
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    iRet=CountDigitR(Value);
    printf("Count is %d\n",iRet);
    
    
    return 0;
}