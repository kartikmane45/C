#include<stdio.h>
int main()
{
	char s[200];
	printf("enter string:");
	scanf("%[^\n]",s);

	int len;
	for(len=0;s[len];len++);

	int i,j,t;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;

	}
	printf("after reverse=%s\n",s);
}
