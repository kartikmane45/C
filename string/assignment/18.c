#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]",s);

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	for(i=len;i>=2;i--)
	{
		s[i+1]=s[i];
	}
	s[2]='9';
	printf("string: %s\n",s);
}
