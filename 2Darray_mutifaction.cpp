#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("enter how many rows :");
	scanf("%d",&row);
	printf("enter how many col :");
	scanf("%d",&col);
	int a[row][col],b[row][col],c[row][col];
	printf("\nenter first 2D matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter second 2D matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
           scanf("%d",&b[i][j]);			
		}
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
   		   c[i][j]=a[i][j]*b[i][j];
		}
	}
	printf("\ncalclute M*N of 2D matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
           printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
