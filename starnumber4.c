#include <stdio.h>

int main()
{
    int i,j,n,k,count=0;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        if(i>1)
        for(k=i;k>1;k--)
        {
            printf("  ");
        }
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d ",j);
        }
        
        printf("\n");
    }

    return 0;
}
