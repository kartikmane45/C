#include<stdio.h>
int del_dig(char *);
int main()
{
	char s[200];
	printf("enter an string:");
	scanf("%s", s);


	int c;
	c=del_dig(s);
	printf("%s\n", s);
	printf("count:%d\n", c);
	

}
int del_dig(char *s)
{
	int i,j,k,c=0;
	for(i=0;s[i];i++)
	{
		if(s[i]>= 48 && s[i]<=57)
		{
			c++;
			for(j=i;s[j];j++)
				s[j]=s[j+1];

			i--;
		}
	}

	return c;
}
