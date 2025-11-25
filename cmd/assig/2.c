#include<stdio.h>
int my_atoi(const char *p);
int my_strlen(char *p);
int main(int argc, char **argv)
{
	
	int n1,len,d=1;
	len=my_strlen(argv[1]);
	for(int i=0;i<len-1;i++)
		d=d*10;
	n1=my_atoi(argv[1]);

	int dig = n1 / d;
	printf("%d\n", dig);
	

}
int my_strlen(char *p)
{
	int c;
	while(*p)
	{
		c++;
		p++;

	}
	return c;
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
