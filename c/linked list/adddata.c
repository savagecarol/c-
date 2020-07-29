#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node*n1=NULL,*p;
    int n,i;
    printf("we are going to add data into the linked list ");
    printf("enter the no. ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data ");
        scanf("%d",&p->data);

            if(n1=NULL)
              {
                  p->next=NULL;
                  n1=p;
              }
            else
              {
                  p->next=n1;
                  n1=p;
               }

    }
 p=n1;

      while(p!=NULL)
    {
        printf("\n the data entered is %d",p->data);
        p=p->next;
    }

}
