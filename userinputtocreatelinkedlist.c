#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*first=NULL;
void create(int n)
{
    int i,a,b;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    printf("enter value of element");
    scanf("%d",&a);
    first->data=a;
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node ));
        printf("enter value of element %d",i);
        scanf("%d",&b);
        t->data=b;
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }

}
int main()
{
    struct node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    create(8);
    display(first);
    return 0;
}