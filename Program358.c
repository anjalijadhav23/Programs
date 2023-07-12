//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>

bool PerfectR(int No)
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
        PerfectR(No);
    }
    if(Sum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool bRet = false;

    printf("Enter the number \n");
    scanf("%d",&Value);
    bRet=PerfectR(Value);
    if(bRet==true)
    {
        printf("Number is perfect\n");
    }
    else
    {
        printf("Number is Not perfect\n");
    }
    
    return 0;
}