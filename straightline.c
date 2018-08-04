#include<stdio.h>
void main()
{
    int a,b,x,y,k1,k2,m;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    m=(y-b)/(x-a);
    scanf("%d",&k1);
    k2=m*k1-a+b;
    printf("%d %d",k1,k2);
}

