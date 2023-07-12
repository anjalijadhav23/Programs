#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool LoopCheck(PNODE First)
{
  PNODE Student = First;
  PNODE Teacher = First;

  bool flag = false;

  while((Teacher != NULL)&&(Teacher ->next != NULL))
  {
    Student = Student->next;
    Teacher = Teacher->next->next;

    if(Student == Teacher)
    {
      flag = true;
      break;
    }
  }

  return flag;
}

int main()
{
    PNODE Head=NULL;
    PNODE temp1, temp2;
    bool bRet=false;

    InsertFirst(&Head,121);  //used & because call by address
    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);


    bRet =LoopCheck(Head);
    if(bRet == true)
    {
      printf("There is loop\n");
    }
    else
    {
      printf("There is no loop\n");
    }

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