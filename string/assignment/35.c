#include<stdio.h>
int main()
{

	char s[20],d[20],*p;
	printf("enter string:");
	scanf("%[^\n]", s);

	printf("%s\n",s);
	int i,j,k,len,c=0,l;
	for(len=0;s[len];len++);

		for(i=0;s[i];i++)
		{
			c++;
			if(s[i]==32)
			{
//printf("hello\n");
			
				for(k=i-1,l=i-(c-1);l<k;k--,l++)
				{
				       char t=s[k];
					s[k]=s[l];
					s[l]=t;
				}
			c=0;
			}
		}
	
	int m;
	for(k=i-1,l=i-(c);l<k;k--,l++)
	{

				       char t=s[k];
					s[k]=s[l];
					s[l]=t;
	
	}
	
	printf("string is: %s\n", s);

	
	
}
