#include<stdio.h>

void DisplayR(int No)         //Static Storage class 
{
    static int iCnt=1;

    if(iCnt<=No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);     //Recursive call
    }
}

int main()
{
    int Value = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    DisplayR(Value);
    printf("\nEnd of Main\n");

    return 0;
}