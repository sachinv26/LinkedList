#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first;
void create(int n)
{
    int i,a,b;
    struct node *last,*temp;
    first=(struct node *)malloc(sizeof(struct node));
    printf("enter the value of node 1 : ");
    scanf("%d",&a);
    first->data=a;
    first->next=NULL;
    last=first;
    for(i=2;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter the value of node %d : ",i);
        scanf("%d",&b);
        temp->data=b;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

}
void display(struct node *p)
{
    if(p!=NULL)
    {
        display(p->next);
        printf("%d ",p->data);
    }
}
int main()
{
    int n;
    printf("enter the no of nodes you want");
    scanf("%d",&n);
    create(n);
    display(first);
    return 0;
}