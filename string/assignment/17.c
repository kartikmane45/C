#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string: ");
	scanf("%[^\n]",s);

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);

	for(i=0;i<len;i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			dig = s[i]-'0';
			c=0;
			for(k=1;k<=dig;k++)
			{
				if(dig % k == 0)
					c++;
			}
			if(c==2)
			{
				for(j=i;j<len;j++)
					s[j]=s[j+1];
				i--;
				len--;

				s[j]='\0';
			}
		}

	}
	printf("string: %s\n",s);
}
