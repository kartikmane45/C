#include<stdio.h>
int main()
{

	char s[20],ch,ch1,*p;
	printf("enter string: ");
	scanf("%[^\n]",s);
	

	int l,i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	p=s;

	for(i=0;s[i];i++)
	{
		if(s[i] !=32)
		{
			c++;
		}
		else
		{
			printf("%d ",c);
			c=0;
		}
		
	}

	if(c>0)
		printf("%d ", c);

	printf("\n");

}
