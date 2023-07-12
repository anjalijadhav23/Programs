#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;


UINT OffBit(UINT No, UINT iPos)
{
   UINT iMask= 0X00000001;
   UINT iAns=0;

   iMask = iMask<<(iPos - 1);

   iMask= ~iMask;

   iAns= No & iMask;
   return iAns;

}

int main()
{
    UINT Value = 0;
    UINT iPos=0;
    UINT iRet=0;

    printf("Enter Number :\n");
    scanf("%d",&Value);

    printf("Enter position :\n");
    scanf("%d",&iPos);

    iRet=OffBit(Value,iPos);

    printf("Updated number is : %d\n",iRet);

    return 0;
}