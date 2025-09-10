#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]",s);
	
	int i,j,len;
	for(len=0;s[len];len++);
	
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
		if(s[j]>=48 && s[j]<=57 )
			s[j]=s[j+1];
		}
	}
	printf("string: %s\n",s);
}
