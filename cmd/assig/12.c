#include<stdio.h>
int my_atoi(const char *p);
int my_strlen(char *p);
int my_strcmp(char *p, char *q);
int main(int argc, char **argv)
{
	char *p=argv[1];
	char *q=argv[2];
	int c,d;
	c=my_strlen(argv[1]);
	d=my_strlen(argv[2]);

	printf("len1=%d\n",c);
	printf("len2=%d\n",d);

	int cmp=my_strcmp(p,q);
	if(cmp=0)
		printf("both strings are eqaul\n");
	else
		printf("both strings are not equal\n");
	

}
int my_strlen(char *p)
{
	int c=0;
	while(*p)
	{
			c++;
		p++;
	}
return c;
}
int my_strcmp(char *p, char *q)
{
	while(*p && (*p == *q))
	{
		p++;
		q++;
	}
	return *p-*q;
}
int my_atoi(const char *p)
{
	int i,num=0;
	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;
	for(;p[i];i++)
	{
		if(p[i]>=48 && p[i]<=57)
			num=num *10+p[i]-48;
		else
			break;
	}
	
	if(p[0]=='-')
		num=-num;
	
	return num;
}
