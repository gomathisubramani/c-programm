#include <stdio.h>

int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
