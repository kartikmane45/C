#include<stdio.h>
int main()
{
	char s[20];
	int len,c=0,b=0;
	printf("enter string:");
	scanf("%[^\n]",s);

	printf("string: %s\n",s);

	for(len=0;s[len];len++);
	int i,j,k;

	i=0;
	do
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			c++;

	i++;
	}while(s[i]);

	


	printf("count:%d\n",c);





}
