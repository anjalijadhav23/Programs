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

void InsertFirst(PPNODE First,int no)
{
  PNODE newn=(PNODE)malloc(sizeof(NODE));   //1 allocate memory

 
  newn->data=no;
  newn->next=NULL;

  if(*First==NULL)   //if linked list is empty
  {
    *First = newn;
  }
  else               //if linked list contains at least one node
  {
    newn->next=*First;
    *First=newn;
  }
}

void Display(PNODE First)
{
    printf("Elements from the linked list are:\n");

    while(First!=NULL)
    {
        printf(" |%d| ->",First->data);
        First=First->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head=NULL;
    PNODE temp1, temp2;
    int iRet=0;

    InsertFirst(&Head,121);  //used & because call by address
    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    temp1 = Head;
    temp2 = Head;

    temp1 = temp1->next->next;
    temp2 =temp2->next->next->next->next->next;

    temp2->next = temp1;        //Loop created

    Display(Head);

    

    return 0;
}

/*
//Call By Address

InsertFirst()
InsertLast()
InsertAtPosition()

DeleteFirst()
DeleteLast()
DeleteAtPosition()

//Call By Value

display()
count()
*/