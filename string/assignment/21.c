#include<stdio.h>
int main()
{

	char s[20],ch,ch1;
	printf("enter string: ");
	scanf("%[^\n]",s);
	

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	for(i=0;s[i];i++)
	{
		if(s[i]==32)
			c++;
	}
	printf("count of words is : %d\n",c+1);
}
