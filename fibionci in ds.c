#include <stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	scanf("%d",&n);
	//c=a+b;
	printf("%d %d ",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	printf("%d ",c);
	}

	
}
