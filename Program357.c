//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>

int FactorsAdditionR(int No)
{
    static int iCnt =1;
    static int Sum = 0;

    if(iCnt <= (No/2))
    {
        if((No%iCnt)==0)
        {
            Sum=Sum+iCnt;
        }
        iCnt++;
        FactorsAdditionR(No);
    }
    return Sum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    iRet=FactorsAdditionR(Value);
    printf("Summetion of factors %d",iRet);
    

    return 0;
}