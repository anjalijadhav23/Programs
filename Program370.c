//4
//4 + 3 + 2 + 1 = 10 
#include<stdio.h>
#include<stdbool.h>
void Display(char *str)
{
    static int iCnt = 0;
    if(*str!='\0')
    {
        
        str++; 
        Display(str);
        printf("%c\n",*str);
        
       
    }
}


int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter String\n");

    scanf("%[^'\n']",Arr);

    Display(Arr);

    
    
    
    return 0;
}