#include<stdio.h>
void main()
{ 
   int a[50][50],b[50][50],i,j,row,col,sum=0;
   printf("enter row :");
   scanf("%d",&row);
   printf("enter col :");
   scanf("%d",&col);
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
    		scanf("%d",&b[i][j]);
		}
	}
	for(i=0; j<row; i++)
	{
		for(j=0; j<col; j++)
		{
			sum=a[i][j]+b[i][j];
		}
	}
	printf("sum of 2d array=%d",sum);
}

