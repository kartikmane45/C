#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]",s);
	
	int i,j;
	
	for(i=0;s[i];i++)
	{
		s[i]=s[i+3];
	}
	printf("string: %s\n",s);
}
