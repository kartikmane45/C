#include<stdio.h>
void del_char(char *);
int main()
{
	char s[200], *p;
	printf("enter string:");
	scanf("%s",s);

	p=s;
	del_char(p);

	printf("%s\n",s);
}
void del_char(char *p)
{
	int i,j,k;
	for(i=0;p[i];i++)
	{
		for(j=i+1;p[j];j++)
		{
			if(p[i]==p[j])
			{
				for(k=j;p[k];k++)
				{
				//	if(p[j]==p[k])
					p[k]=p[k+1];
				}
				j--;
			}

		}
	}
}
