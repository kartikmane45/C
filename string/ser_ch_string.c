#include<stdio.h>
int main()
{
	char s[100];
	printf("enter an string:");
	scanf("%s", s);

	char ch;
	printf("enter an ch:");
	scanf(" %c",&ch);
	int l;

	for(int l=0;s[l];l++);

	//for(int i=0;i<l-1;i++)
	for(int i=0;s[i];i++)
	{
		if(s[i] == ch)
		{
			printf("char is found\n");
			return 0;
		}
	}

			printf("char not found\n");

}
