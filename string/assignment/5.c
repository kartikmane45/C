#include<stdio.h>
int main()
{
	char *p, s[20];
	printf("enter string:");
	scanf("%[^\n]", s);


	int len,i,c=0,add=0;

	p=s;

	for(len=0;*(p+len);len++);

	for(i=0;s[i];i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			add=add+*(p+i);
			//c++;
		}
	}

	printf("addition of digits is:%d\n",add);
}
