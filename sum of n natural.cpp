#include<stdio.h>
int main()
{
	int n=2,i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum of first %d number is %d",n,sum);
	return 0;
}
