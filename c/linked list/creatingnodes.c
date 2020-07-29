#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;

}sNODE;

void main()
{
    int ch,item;
    sNODE *n1,*n2,*n3;


    n1=(sNODE *)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&n1->data);

    n2=(sNODE *)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&n2->data);

    n3=(sNODE *)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&n3->data);

    printf("\nThe data entered is %d",n1->data);
     printf("\nThe data entered is %d",n2->data);
      printf("\nThe data entered is %d",n3->data);

}
