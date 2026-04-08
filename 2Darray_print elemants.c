#include<stdio.h>
void main()
{
	int row,col,i,j;
	printf("enter row limit :");
	scanf("%d",&row);
	printf("enter col limit :");
	scanf("%d",&col);
	int a[row][col];
	printf("\nenter 2D array elemants\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n2D array elemants\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
}
