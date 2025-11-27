#include<stdio.h> 
int main()
{
	char s[100],i;
	printf ("enter a sentance:\n");
	fgets(s,sizeof(s),stdin);
	printf("word in a sentence are:\n");
	for (i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}
