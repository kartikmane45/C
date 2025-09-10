#include<stdio.h>
int main()
{
	char s[20],ch;
	printf("enter string:");
	scanf("%s",s);
	printf("enetr ch:");
	scanf(" %c",&ch);

	int len;
	for(len=0;s[len];len++);
	
	int i,c=0,j;
		for(i=len-1;s[i];i--)
		{
			if(s[i] == ch)
			{
				c++;
				if(c<3)
				{
				for(j=i;s[j];j++)
					s[j]=s[j+1];
				}
				
			}
		}
	
//	printf("c=%d\n",c);
	printf("%s\n",s);	
}
