#include <stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{           printf("\n");
	            for(j=1;j<=n;j++)
		{
			if(i==5||i==1||j==1||j==5||j==i/2||i==j/2||i==j)
		            {
		            	printf("*\t");
		            }
			else
			{
				printf("\t");
			}
		}
	}

	
	
}
