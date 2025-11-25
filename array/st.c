#include<stdio.h>
int main()
{
	 int i,j,k,c=0;
	 char s[100];

	 printf("enter string\n");
	 	scanf("%s", s);


	printf("\n");

	for(i=0;s[i];i++)
	{
		c=1;
		for(j=i+1;s[j];)
		{
			if(s[i]==s[j])
			{
				c++;
			//	for(k=j;s[k];k++)
			//		s[k]=s[k+1];
			}
			else
			{
				j++;
			}
		}
//		if(c>1)
			printf(" %c-->%d\n",s[i],c);

	}
	
}


