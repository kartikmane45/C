
#include<stdio.h>
int main()
{

	char s[20],ch,ch1;
	printf("enter string: ");
	scanf("%[^\n]",s);
	

	int i,j,len,dig,k,c=0;
	for(len=0;s[len];len++);


	for(i=0;i<len;i++)
	{
		if(s[i]=='g')
		{
			for(j=i ; j>=0 && s[j]!=32;j--);
				j++;
				for(k=j;s[k] && s[k]!=32;k++)
					printf("%c",s[k]);
				printf(" ");
		}
	}


/*


	for(i=len-1;i>=0;i--)
	{
			if(s[i]=='g')
			{
				for(j=i;j>=0 && s[j]!=32;j--);
				j++;
				for(k=j;s[k] && s[k]!=32;k++)
				{
					printf("%c",s[k]);
				}
				printf(" ");
			}
	}
*/
/*

	for(i=0;s[i];i++)
	{
		if(s[i]==32)
		{
			if(s[i-1] == 'g')
			{
				for(j=i-1;s[j]!=32;j--)
					printf("%c", s[j]);
			}

		}
	}
*/
	printf("\n");
//	printf("string is: %s\n",s);
}
