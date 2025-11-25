#include<stdio.h>
int my_atoi(const char *p);
int main(int argc, char **argv)
{
	int n1;
	n1=my_atoi(argv[1]);

	printf("%d\n", n1);
	

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
