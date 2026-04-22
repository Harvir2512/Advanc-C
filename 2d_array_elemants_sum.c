#include<stdio.h>
void main()
{
	
	int i,j,row,col,sum=0;
	printf("how many rows :");
	scanf("%d",&row);
	printf("how many col :");
	scanf("%d",&col);
	int a[row][col];
	printf("\nenter 2d array\n");
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
			sum=sum+a[i][j];
		}
	}
	printf("sum of all elemants=%d",sum);
}
