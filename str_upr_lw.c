#include<stdio.h>
int main()
{
	char s[100];
	printf("enter string:");
	scanf("%[^\n]", s);

	printf("string is:%s\n",s);

	int len,i,c=0,d=0;
	for(len=0;s[len];len++);

	for(i=0;i<len-1;i++)
	{
		if(s[i]>'a' && s[i]<'z')
		{
			s[i]=s[i]-32;
			c++;
		}
		else if(s[i]>'A' && s[i]<'Z')
		{
			s[i]=s[i]+32;
			d++;
		}
	}
	printf("after converting upper to lower and lower to upper:%s\n",s);
	printf("after converting upper  count =%d to lower count=%d \n",c,d);
}
