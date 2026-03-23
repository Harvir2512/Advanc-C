#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter number :");
	scanf("%d",&n);
	int a[n];
	printf("\n enter array elemants \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n sum of array \n");
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	printf("sum of elemats :%d",sum);
}
