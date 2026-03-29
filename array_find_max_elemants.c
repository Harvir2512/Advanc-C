#include<stdio.h>
void main()
{
	int i,j,max,n,index;
	printf("enter array limit :");
	scanf("%d",&n);
	int a[n];
	printf("\nenter array elemants\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(j=0; j<n; j++)
	{
		for(i=0; i<n; i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				index=i;
			}
		}
	}
	printf("maxium number of array=%d",a[index]);
}

