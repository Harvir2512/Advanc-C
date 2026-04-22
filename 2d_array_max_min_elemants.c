#include<stdio.h>
void main()
{
	
	int i,j,row,col,max,min;
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
	max=a[0][0];
	printf("\nmaximum elemants\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
		printf("\n");
	}
	printf("maximum elemants of matrix=%d",max);
	min=a[0][0];
	printf("\nmainmum elemants\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
		printf("\n");
	}
	printf("maimum elemants of matrix=%d",min);
}
