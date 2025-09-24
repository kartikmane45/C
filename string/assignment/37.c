#include<stdio.h>
int main()
{
	char s[200],d[200],r[200];
	int i,j,k=0;
	printf("enter string:");
	scanf("%[^\n]",s);
	printf("enter string:");
	scanf(" %[^\n]",d);

	for(i=0,j=0;s[i] && s[j];i++,j++)
	{
		r[k++]=s[i];
		r[k++]=d[i];
		
	}

	while(s[i])
	{
		r[k++]=s[i];

		i++;
	}

	while(d[j])
	{
		r[k++]=d[j];

		j++;
	}
	d[k++]='\0';

	printf("%s\n",r);
}
