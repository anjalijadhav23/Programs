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
        printf("|%d|->",First->data);
        First=First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt=0;

    while(First!=NULL)
    {
        iCnt++;
        First=First->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp=*First;

    if(*First==NULL)         //Empty LL
    {
        return;
    }
    else if((*First)->next==NULL)  //1 node in LL
    {
        free(*First);
        *First=NULL;
    }
    else                          //More than 1 node in LL
    {
        (*First)=(*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp=*First;

    if(*First==NULL)         //Empty LL
    {
        return;
    }
    else if((*First)->next==NULL)  //1 node in LL
    {
        free(*First);
        *First=NULL;
    }
    else                          //More than 1 node in LL
    {
      while(temp->next->next!=NULL) 
      {
          temp=temp->next;

      }   
      free(temp->next);
      temp->next=NULL; 
    }
}

void InsertAtPos(PPNODE First, int no,int ipos)
{
    int NodeCnt=0,iCnt=0;
    NodeCnt=Count(*First);
    PNODE newn=NULL;
    PNODE temp=NULL;
    
    if((ipos<1)||(ipos>(NodeCnt+1)))
    {
        printf("Invalid Position.....\n");
        return;
    }

    if(ipos==1)
    {
        InsertFirst(First,no);
    }
    else if(ipos==NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
       newn=(PNODE)malloc(sizeof(NODE));

       newn->data=no;
       newn->next=NULL;

       temp=*First;

       for(iCnt=1;iCnt<ipos-1;iCnt++)
       {
        temp=temp->next;
       }

       newn->next=temp->next;
       temp->next=newn;

    }
}

void DeleteAtPos(PPNODE First,int ipos)
{
    PNODE temp1=NULL;
    PNODE temp2=NULL;
    int iCnt=0,NodeCnt=0;

    NodeCnt=Count(*First);

    if((ipos<1)||(ipos>NodeCnt))
    {
        printf("Invalid Position...\n");
        return;
    }

    if(ipos==1)
    {
        DeleteFirst(First);
    }
    else if(ipos==NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1=*First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp1=temp1->next;
        }

        temp2=temp1->next;

        temp1->next=temp2->next;  //temp1->next=temp1->next->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head=NULL;
    int iChoice = 0, iPos = 0, iRet = 0, iNo = 0;

    printf("Welcome to data Structure application written by Anjali Rohokale\n");
    while(1)
    {
        printf("___________________________________________\n");
        printf("Please Select the desired option : \n");
        printf("1 : Insert new node at First position \n");
        printf("2 : Insert new node at Last position \n");
        printf("3 : Insert new node at given position \n");
        printf("4 : delete  node frome First position \n");
        printf("5 : delete  node frome Last position \n");
        printf("6 : delete  node frome given position \n");
        printf("7 : Display the contents of Linked List \n");
        printf("8 : Count number of nodes from Linked List\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertFirst(&Head,iNo);
                break;

            case 2:
                printf("Enter the data that you want to Insert : \n");
                scanf("%d",&iNo);

                InsertLast(&Head,iNo);
                break;

            case 3:
                printf("Enter the data : \n");
                scanf("%d",&iNo);

                printf("Enter the position : \n");
                scanf("%d",&iPos);

                InsertAtPos(&Head,iNo,iPos);
                break;

            case 4:
                DeleteFirst(&Head);
                break;
                
            case 5:
                DeleteLast(&Head);
                break;

            case 6:
                printf("Enter the position where you want to delete the data : \n");
                scanf("%d",&iNo);

                DeleteAtPos(&Head,iPos);
                break;

            case 7:
                Display(Head);
                break;

            case 8:
                iRet=Count(Head);
                printf("Total Elements of Linked list are : %d\n",iRet);
                break;

            case 9:
                printf("Thank you for using the application\n");
                return 0;

            default:
                printf("Invalid Option\n");
                break;
        }
        printf("___________________________________________\n");
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