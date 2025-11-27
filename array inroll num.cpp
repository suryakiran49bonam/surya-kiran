#include<stdio.h>
int main()
{
	int roll_num[59],i,key,n;
	printf("enter n value");
	scanf("%d,&n");
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",roll_num[i]);
	}
	printf("enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==roll_num[i])
		{
			printf("element found at index %d",i);
			break;
		}
	}
	return 0;
}
