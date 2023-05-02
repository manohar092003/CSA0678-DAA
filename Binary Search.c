#include<stdio.h>
int main()
{
	int low,high,n,mid,a[20],key=3;
low=0;
high=n-1;
mid=(low+high)/2;
while(low<=high)
{
	if(a[mid]<key)
	low=mid-1;
	else if(a[mid]==key)
	{
		printf("elements found at %d",mid);
		break;
		}
	else
	{
		high=mid-1;
		mid=(low+high)/2;
		}	
}
if (low>high)
printf("not found");
return 0;
	
}

