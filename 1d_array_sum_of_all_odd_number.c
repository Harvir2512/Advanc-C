#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter array elemants:");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]%2==1)
		{
			sum=sum+a[i];
		}
	}
	printf("sum of odd number=%d",sum);
	
}
