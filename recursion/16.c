#include<stdio.h>
int my_strcmp(char *p, char*q);
int main()
{
	char s[100],d[100],*p,*q;
	printf("string1:");
	scanf("%[^\n]", s);
	printf("string2:");
	scanf(" %[^\n]", d);

	p=s;
	q=d;


	int r=my_strcmp(p,q);
	if(r)
//		printf("equal!!\n");
		printf("not equal!!\n");
	else
//		printf("not equal!!\n");
		printf("equal!!\n");


}
int my_strcmp(char *p, char*q)
{
/*	
	while(*p && *q)
	{
		if(*p!=*q)
			break;
	p++;
	q++;
	}
	if(*p==*q)
		return 1;
	else
		return 0;
*/

	
/*
	if(*p=='\0' && *q=='\0')
		return 0;

	if(*p != *q)
		return 1;

	if(*p && *q)
		return my_strcmp(p+1, q+1);

 */




	if(*p!='\0' && *q!='\0')
	{
		if(*p==*q)
		{
			p++;
			q++;
			my_strcmp(p,q);
		}
		else
		{
			if(*p==*q)
				return 0;
			else
				return 1;
		}
	}
	else
	{
		if(*p==*q)
			return 0;
		else
			return 1;
	}

}

