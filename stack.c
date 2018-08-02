#include <stdio.h>
#define max 100
int top=-1;
int a[max];
void push(int item)
{
    if(top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        top=top+1;
        a[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        printf("pop item %d",a[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack overflow");
    }
    else
    {
        for(i=top;i>=0;i--)
        printf("%d ",a[i]);
    }
}
int main()
{
    int choice,item,y;
    do{
    printf("1.push\n2.pop\n3.display\n4.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter the item");
        scanf("%d",&item);
        push(item);
        break;
        case 2:
        pop();
        break;
        case 3:
        printf("the elements are ");
        display();
        break;
        case 4:
        return(0);
        default:
        printf("invaid choice");
    }
    printf("\ndo u want to continue(1/0):");
    scanf("%d",&y);
    }
    while(y==1);

}


