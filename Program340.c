#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT iPos)
{
    UINT iMask=0X00000001;
    UINT Result=0;

    if((iPos<1)||(iPos>32))
    {
        printf("Invalid position , it should between 1 to 32\n ");
        return false;
    }

    iMask = iMask << (iPos-1);   //Dynamic mask formation 

    Result = No & iMask;
    if(Result == iMask)
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
    UINT Value = 0;
    UINT iPos=0;
    bool bRet = false;
    
    printf("Enter Number :\n");
    scanf("%d",&Value);

    printf("Enter the position : \n");
    scanf("%d",&iPos);

    bRet = CheckBit(Value,iPos);

    if(bRet == true)
    {
        printf("Bit at the position %d is ON\n",iPos);
    }
    else
    {
        printf("Bit at the position %d is OFF\n",iPos);
    }
    return 0;
}