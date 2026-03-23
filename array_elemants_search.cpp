#include<stdio.h>
int main()
{
	int n,num,i;
	printf("enter limit :");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array linit \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter search array elements\n");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		if(num==a[i]);
		{
			break;
		}
	}
	if(i==n)
	  printf("number is not found");
	else
	  printf("number is found");
}
