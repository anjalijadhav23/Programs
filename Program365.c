//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>
int CountSmallR(char *str)
{
    static int iCnt = 0;
    if(*str!='\0')
    {
        if((*str >='a')&&(*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmallR(str);
    }
    return iCnt;
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter String\n");

    scanf("%[^'\n']",Arr);

    iRet=CountSmallR(Arr);

    printf("Capital caracters is %d\n",iRet);
    
    
    return 0;
}