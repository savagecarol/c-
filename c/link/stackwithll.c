#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
void push(int);
void pop();
void display();
struct node *start=NULL;
top=-1;()
int main()
{
    int input,x;
    for(;;)
    {
      printf("enter the choice \n \n");
      printf("1. push\n");
      printf("2. pop\n") ;
      printf("3. display\n");
      printf("4.exit");
      scanf("%d\n",&input);

        if(input==1)
           {
            printf("enter the no. you want to push into the stack\n");
                scanf("%d\n",&x);
                push();
           }
        else if(input==2)
            pop();
        else if(input==3)s
            display();
        else if(input==4)
            break;
        else
            printf("wrong choice choose again\n");
    }
}

void push(int n)
{
    struct

}
