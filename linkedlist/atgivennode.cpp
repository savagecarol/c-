#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

int location(struct Node *head,int x);

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        cin>>x;
        int data;
        cin>>data;
        struct Node *head=new Node(data);
        struct Node *tail=head;
        for(int i=0;i<n-1;i++)
           {
            cin>>data;
            tail->next=new Node(data);
            tail=tail->next;
           }
        cout<<location(head,x)<<endl;
    }

}

int location(struct Node *head,int x)
{
    int i=1;
    while(head!=NULL)
    {
        if(i==x)
             return head->data;
        i++;
        head=head->next;
    }
}
