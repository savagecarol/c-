#include<stdio.h>
typedef struct node
{
    int data;
struct node * next;

};
void main()
{
    int ch,item;
    struct node *n1,*n2,*n3,*p;
    n1=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&n1->data);

    n2=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&n2->data);

    n3=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&n3->data);

    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;

    p=n1;

    while(p!=NULL)
    {
        printf("\n the data entered is %d",p->data);
        p=p->next;
    }

}
