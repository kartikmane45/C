#include<stdio.h>
double my_atof(const char *p);
int main(int argc, char **argv)
{

	double d;
	d=my_atof(argv[1]);
	printf("%f",d);


}
double my_atof(const char *p)
{
	int i,num1=0, num2=0,c=0,d=1;
	double f,f1;
	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;
	for(;p[i]!='.';i++)
	{
		if(p[i]>=48 && p[i]<=57)
			num1=num1 *10+p[i]-48;
		else
			break;
	}
	for(i=i+1;p[i];i++)
	{
		if(p[i]>=48 && p[i]<=57)
		{
			num2=num2 *10+p[i]-48;
			d=d*10;
		}
		else
		{
			break;
		}
	}
	
	f1=(double)num2/d;
	f=num1+f1;

	if(p[0]=='-')
		f=-f;
	
	return f;
}
