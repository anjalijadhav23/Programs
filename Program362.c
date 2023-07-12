//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>
int strlenI(char *str)
{
    int iCnt = 0;
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter String\n");

    scanf("%[^'\n']",Arr);

    iRet=strlenI(Arr);

    printf("String length is %d\n",iRet);
    
    
    return 0;
}