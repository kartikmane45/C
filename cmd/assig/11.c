#include<stdio.h>
int my_atoi(const char *p);
int main(int argc, char **argv)
{
	char *p=argv[1];
	int c=0;
	while(*p)
	{
		if(*p>=48 && *p<=57)
			c++;
		p++;

	}
	printf("%d\n",c);
	

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
