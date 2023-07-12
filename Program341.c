#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT iPos1, UINT iPos2)
{
    UINT iMask1=0X00000001;
    UINT iMask2=0X00000001;

    UINT iMask=0;
    
    UINT Result=0;

    if((iPos1<1)||(iPos1>32)||(iPos2<1)||(iPos2>32))
    {
        printf("Invalid position , it should between 1 to 32\n ");
        return false;
    }

    iMask1 = iMask1 << (iPos1-1);   //Dynamic mask formation 
    iMask2 = iMask2 << (iPos2-1); 

    iMask=iMask1|iMask2;

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
    UINT iPos1=0;
    UINT iPos2=0;
    bool bRet = false;
    
    printf("Enter Number :\n");
    scanf("%d",&Value);

    printf("Enter the position 1 : \n");
    scanf("%d",&iPos1);

    printf("Enter the position 2 : \n");
    scanf("%d",&iPos2);

    bRet = CheckBit(Value,iPos1,iPos2);

    if(bRet == true)
    {
        printf("Bit at the position %d & %d is ON\n",iPos1,iPos2);
    }
    else
    {
        printf("Bit at the position %d & %d is OFF\n",iPos1,iPos2);
    }
    return 0;
}