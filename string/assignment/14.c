#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string:");
	scanf("%[^\n]",s);
	
	int i,j;
	
	for(i=0;s[i];i++)
	{
//		for(j=i;s[j];j++)
			s[i]=s[i+1];
	}
	printf("%s\n",s);
}
