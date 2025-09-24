#include<stdio.h>
int main()
{

	char s[20],d[20],*p;
	printf("enter string:");
	scanf("%s", s);

	int i,j,k,len;
	for(len;s[len];len++);

	for(i=0,j=len-1;i<j;j--,i++)
	{
		if(s[i]!=s[j])
			break;
	}
	if(s[i]==s[j])
	printf("yes\n");
	else
	printf("noo\n");
}
