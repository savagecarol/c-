#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
struct node *emplist(struct node *start,int data);
struct node *beg(struct node *start,int data);
struct node *end(struct node *start,int data);
struct node *nposition(struct node *start,int data);
struct node *disp(struct node *start);
int main()
{

    stuct node *start=NULL;
    int ch,data,positon;
    while(1)
    {

        printf("1. Insert in a empty list \n");
        printf("2. Insert at begning \n");
        printf("3. Insert at end \n");
        printf("4. Insert at nth positon \n");
        printf("5. display \n");
        printf("6. END PROGRAM\n");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:
            if(start!=NULL)
            {
                printf("List is not empty\n");
                break;
            }
            printf("Enter element: ");
            scanf("%d",&data);
            start=emplist(start,data);
            break;

          case 2:
            printf("Enter element: ");
            scanf("%d",&data);
            start=beg(start,data);
            break;

           case 3:
            printf("Enter element: ");
            scanf("%d",&data);
            start=end(start,data);
            break;

           case 4:
            printf("Enter element: ");
            scanf("%d",&data);
            start=nposition(start,data);
            break;

         case 5:
            printf("Enter element: ");
            scanf("%d",&data);
            disp(start,data);
            break;

        case 6:
            ch=0;

        default:
            printf("wrong input");
        }

    }
}
struct node *emplist(struct node *start,int data)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->=data;
    p->

};
