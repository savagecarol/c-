#include<stdio.h>
#define MAX 10

int a[MAX],top;
void display(int []);

void Push(int [],int);

void pop(int []);

void main()
{
    int item=0;
    int choice=0;
    int top=-1;
    int t=1;

while(t)
 {

    printf("enter  the choice\nenter 1 for display\nenter 2 for push\nenter 3 for pop\nenter 4 for exit  ");
    scanf("%d",&choice);
    switch(choice)
      {
    case 1:display(a);
        break;
    case 2:printf("enter item to that you want to insert\n");
           scanf("%d",item);
           push(a,item);
        break;
     case 3:pop(a);
        break;
     case 4:
         t=0;
         break;
    default:printf("wrong input");
      }
    }
}

void display(int a[])
{
    int i=0;
    if(top==-1)
    {
        printf("Stack is Empty .\n");
        return;
    }
        printf("%d <-- TOP ",a[top]);
    for(i=top-1;i >=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}


void push(int a[],int item)
{
    if(top==MAX-1)
    {
        printf("\nSTACK is FULL CAN't ADD ITEM\n");
        return;
    }
    top++;
    a[top]=item;

}

void pop(int a[])
{
    int di;
    if(top==-1)
    {
        printf("STACK is EMPTY.\n");
        return;
    }

    di=a[top];
    top--;
    printf("%d deleted successfully\n",di);
    return;
}






