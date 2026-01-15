#include<stdio.h>
int main()
{
	int i,j,nr;
	printf("Enter number of rows: ");
	scanf("%d",&nr);
	
	int x=nr/2+1;
	int y=nr/2+1;
	
	for(i=1;i<=nr;i++)
	{
		for(j=1;j<=nr;j++)
		{
			if(j==x||j==y)
			printf("* ");
			else
			printf("  ");
		}
		if(i<nr/2+1)
		{
			x--;
			y++;
		}
		else
		{
			x++;
			y--;
		}
		printf("\n");
	}
	return 0;
}
