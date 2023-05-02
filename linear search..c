#include<stdio.h>
int main()
{
	int a[20],X=40,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (a[i]==X)
		{
			printf("element found at",a[i]);
		    break;
		}
	printf("element not found");
	return 0;
	}
}
