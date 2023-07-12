//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>

int SumDigitR(int No)
{
    
    int Digit = 0;
    static int Sum = 0;


    if(No!=0)
    {
        Digit=No%10;
        Sum=Sum+Digit;
        No=No/10;
        SumDigitR(No);
    }
    return Sum;
    
    
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    iRet=SumDigitR(Value);
    printf("Summetion is %d\n",iRet);
    
    
    return 0;
}