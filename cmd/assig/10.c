#include<stdio.h>
int my_atoi(const char *p);
int main(int argc, char **argv)
{
	int n;
	n=my_atoi(argv[1]);

	int i,j,k,l,m=1;
	for(i=0;i<n;i++)
	{
		l=n-i;
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n-i;k++)
		{
			printf("%d ", (2*l)-m );
			l--;
		}
			printf("\n");
		
	}

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
