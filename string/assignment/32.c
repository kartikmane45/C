#include<stdio.h>
int main()
{
	int i,j,k,len;
	char s[200];
	printf("enter an string:");
	scanf("%[^\n]", s);

	for(i=0;s[i];i++)
	{
		if(s[i]==32)
		{
			if(s[i+1]==32)
			{
				for(j=i;s[j];j++)
				{
					s[j]=s[j+1];
				}
				i--;
			}
		}

		
	}

	printf("s=%s\n", s);
	
}

