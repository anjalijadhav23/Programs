#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void DisplayR(PNODE First)
{
    if(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
        DisplayR(First);
    }
    
}

//This is only possible way by recursive function to display reverse data

void DisplayReverse(PNODE First)
{
    if(First != NULL)
    {
        DisplayR1(First->next);
        printf("| %d |-> ",First->data);
        
    }
    
}



int CountR(PNODE First)
{
    static int iCnt = 0;

    if(First != NULL)
    {
        iCnt++;
        First = First -> next;
        CountR(First);
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);

    DisplayR1(Head);

    iRet = CountR(Head);
    printf("\nNumber of nodes are : %d\n",iRet);

    return 0;
}
