#include<stdio.h>
int main()
{
	int i,j,nr;
	printf("Enter number of rows: ");
	scanf("%d",&nr);
	
	for(i=1;i<=nr;i++)
	{
		for(j=1;j<=nr;j++)
		{
		   if(j==1||i==1||i==nr||j==nr||j==nr/2+1||
		   i==nr/2+1)
		   printf("* ");
		   else
		   printf("  ");
		}
	
		printf("\n");
	}
}
