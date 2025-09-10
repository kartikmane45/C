#include<stdio.h>
int main()
{
	char s[200];
	printf("enter string:");
	scanf("%[^\n]",s);

	int i=0,pos;
	for(i=0;s[i];i++)	
	{
		if(s[i]==' ')
			continue;
		
		for(pos=7;pos>=0;pos--)
			printf("%d", s[i]>> pos &1);

	printf(" ");
	}
	printf("\n");
}
