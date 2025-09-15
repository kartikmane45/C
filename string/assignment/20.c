#include<stdio.h>
int main()
{
	int d,e;

	char s[20],ch,ch1;
	printf("enter string: ");
	scanf("%[^\n]",s);
	
	printf("enter ch:");
	scanf(" %c", &ch);
	printf("enter ch2:");
	scanf(" %c", &ch1);

	printf("enter index:");
	scanf("%d",&d);

	printf("enter second index:");
	scanf("%d", &e);

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	for(i=len;i>=d;i--)
	{
		s[i+2]=s[i];
	}
	s[d]=ch;
	s[e]=ch1;
	printf("string: %s\n",s);
}
