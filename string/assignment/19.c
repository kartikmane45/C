#include<stdio.h>
int main()
{
	int d,ch;
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]",s);
	
	printf("enter ch:");
	scanf(" %c", &ch);

	printf("enter index:");
	scanf("%d",&d);


	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	for(i=len;i>=d;i--)
	{
		s[i+1]=s[i];
	}
	s[d]=ch;
	printf("string: %s\n",s);
}
