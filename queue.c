#include<stdio.h>
#include<stdlib.h>
#define max 100
int front=-1;
int rear=-1;
int a[max];
void insert(int item)
{
    if(rear==max-1)
    {
        printf("queue is full");
    }
    else
    { 
        front=0;
        rear=rear+1;
        a[rear]=item;
    }
}
void delete()
{
    if(rear==-1||front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        front=front*1;
        printf("deleted element %d",a[front]);
    }
}
void display()
{
    int i;
    if(rear==-1||front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d ",a[i]);
    }
}
int main()
{
    int choice,item,y;
    do{
    printf("1.insert\n2.delete\n3.display\n4.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter the item");
        scanf("%d",&item);
        insert(item);
        break;
        case 2:
        delete();
        break;
        case 3:
        printf("the elements are ");
        display();
        break;
        case 4:
        exit(0);
        default:
        printf("invaid choice");
    }
    printf("\ndo u want to continue(1/0):");
    scanf("%d",&y);
    }
    while(y==1);

}


