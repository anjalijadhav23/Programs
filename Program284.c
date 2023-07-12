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

void InsertLast(PPNODE First,int no)
{
  PNODE newn=(PNODE)malloc(sizeof(NODE));
  
   PNODE temp=*First;  
  newn->data=no;
  newn->next=NULL; 

  if(*First==NULL)   //if linked list is empty
  {
    *First = newn;
  }
  else               //if linked list contains at least one node
  {
     while(temp->next!=NULL)
     {
        temp=temp->next;
     }
     temp->next=newn;
  } 
}

void Display(PNODE First)
{
    printf("Elements from the linked list are:\n");

    while(First!=NULL)
    {
        printf("|%d|->",First->data);
        First=First->next;
    }
    printf("NULL\n");
}


void DisplayDigitSum(PNODE First)
{
    int iNo=0;
    int iSum=0;
    int iDigit=0;

    while(First!=NULL)
    {
        iNo=First->data;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("Addition of digits of the number %d is %d\n",First->data,iSum);
        First=First->next;
        iSum=0;
    }
}


int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);  

    DisplayDigitSum(Head);       

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