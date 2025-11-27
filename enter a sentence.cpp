#include<stdio.h> 
int main()
{
	char s1[10];
	printf ("enter a sentance:\n");
	fgets(s1,sizeof(s1),stdin);
	printf("%s",s1);
}
