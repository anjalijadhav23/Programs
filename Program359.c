//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>

int CountDigitI(int No)
{
    int iCnt =0;
    int iDigit=0;

    while(No!=0)
    {
        
        iCnt ++;
        No=No/10;
    }
    return iCnt;
    
    
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    iRet=CountDigitI(Value);
    printf("Count is %d\n",iRet);
    
    
    return 0;
}