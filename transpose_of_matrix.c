#include<stdio.h>
void main()
{
	int row,col,i,j;
	printf("how many rows :");
	scanf("%d",&row);
	printf("how many colm :");
	scanf("%d",&col);
	int a[row][col];
	printf("\nenter matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
