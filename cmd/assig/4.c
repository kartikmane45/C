#include<stdio.h>
int my_atoi(const char *p);
int main(int argc, char **argv)
{
	int n1,n2;
	n1=my_atoi(argv[1]);
	n2=my_atoi(argv[2]);

	int i,sum,temp,r,j,fact;
	for(i=n1;i<=n2;i++)
	{
		temp=i;
		sum=0;
		for(;temp;temp=temp/10)
		{
			r=temp%10;
			fact=1;
			for(j=1;j<=r;j++)
			{
				fact=fact *j;
			}
			sum=sum+fact;
		}
		if(sum==i)
			printf("%d\n", i);
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
