#include<stdio.h>
void main()
{
	int temp,i,j,n;
	printf("enter limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0; j<n; j++)
	{
		for(i=0; i<n-j; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\nsorted array elemants\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
