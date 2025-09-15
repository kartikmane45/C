#include<stdio.h>
int main()
{

	char s[20],ch,ch1;
	printf("enter string: ");
	scanf("%[^\n]",s);
	

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);
/*
	for(i=0;s[i]!=32;i++)
	{
		printf("%c",s[i]);
		
	}
*/
	j=0;
	i=len-1;
	L1:
	printf("%c",s[j]);
	i--;
	if(s[i]!=32)
	goto L1;
	printf("\n");
}
