#include<stdio.h>
int main()
{

	char s[20],ch,ch1;
	printf("enter string: ");
	scanf("%[^\n]",s);
	

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	s[0]=s[0]-32;
	for(i=0;s[i];i++)
	{
		if(s[i]==32)
			s[i+1]=s[i+1]-32;
	}

	printf("string is: %s\n",s);
}
