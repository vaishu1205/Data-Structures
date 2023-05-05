#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	int mid,low=0,high=n-1,v=0;
	//for(i=low;i<=high;i++)
	while(low<=high)
	{
		mid=(low+high)/2;
		if(se==arr[mid])
		{
			printf("Element fou7nd at index %d",mid);
			v=1;
			break;
		}
		else if(se>arr[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(v==0)
	{
	 printf("Element not found");
	}
}
