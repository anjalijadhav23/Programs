//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>
int CountCapitalR(char *str)
{
    static int iCnt = 0;
    if(*str!='\0')
    {
        if((*str >='A')&&(*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        CountCapitalR(str);
    }
    return iCnt;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter String\n");

    scanf("%[^'\n']",Arr);

    iRet=CountCapitalR(Arr);

    printf("Capital caracters is %d\n",iRet);
    
    
    return 0;
}