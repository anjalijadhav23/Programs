#include<stdio.h>

void DisplayR()         //Static Storage class 
{
    static int iCnt=1;

    if(iCnt<=4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     //Recursive call
    }
}

int main()
{
    printf("Inside Main\n");

    DisplayR();

    printf("\nEnd of Main\n");

    return 0;
}