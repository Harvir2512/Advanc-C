#include<stdio.h>
void main()
{
	int i,j,row,col;
	printf("enter how many rows :");
	scanf("%d",&row);
	printf("enter how many col :");
	scanf("%d",&col);
	int a[row][col];
	printf("\nenter first 2D matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nprintf only even matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<row; j++)
		{
			if(a[i][j]%2==0)
			{
				printf("%d  ",a[i][j]);
			}
		}
	}
}
