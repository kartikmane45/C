#include<stdio.h>
int main()
{
	char s[100];
	printf("enter string:");
	scanf("%s",s);

	int i, pos,c=0,d=0,e=0;

//	for(i=0;s[i];i++)
//	{
		for(pos=7;pos>=0;pos--)
		{
		if(s[0]>>pos & 1)
			c++;
		}
		for(pos=7;pos>=0;pos--)
		{
		if(s[1]>>pos & 1)
			d++;
		}
		for(pos=7;pos>=0;pos--)
		{
		if(s[2]>>pos & 1)
			e++;
		}
//	}
	printf("%d %d %d \n",c,d,e);
}
