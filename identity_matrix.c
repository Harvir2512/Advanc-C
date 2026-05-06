#include<stdio.h>
void main()
{
    int r,c,i=0,j=0,num,f=0;
    printf("enter r & c =");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0; i<r; i++)
    {
    	for(j=0; j<c; j++)
    	{
    	  scanf("%d",&a[i][j]);
        }
    }
    num=a[0][0];
	for(i=0; i<r; i++)
	{
	  	for(j=0; j<c; j++)
	  	{
	  		if(i==j)
	  		{
			    if(num==a[i][j])
			    {
			    
			      f++;
				}
			}
		}
	}  
	if(f==r)
	{
		printf("identity matrix");
	}
	else
	{
	   printf("identity not matrix %d ",f);
	} 
	
}
