#include<stdio.h>
int main()
{
	char s[20],*p;
	int len,c=0,b=0;
	printf("enter string:");
	scanf("%[^\n]",s);

	printf("string: %s\n",s);

	for(len=0;s[len];len++);
	int i,j,k,t;

	p=s;

	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(p[j] > p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}	


	printf("string:%s\n",s);





}
