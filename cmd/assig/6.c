#include<stdio.h>
float my_atof(const char *p);
int main(int argc, char **argv)
{
	float f1,f2,f3, sum , avg;
	f1=my_atof(argv[1]);
	f2=my_atof(argv[2]);
	f3=my_atof(argv[3]);

	sum= f1+f2+f3;

	avg=(f1+f2+f3)/3;

	printf("%.2f %.3f\n", sum , avg);




}
float my_atof(const char *p)
{
	int i,num1=0, num2=0,c=0,d=1;
	float f,f1;
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
	
	f1=(float)num2/d;
	f=num1+f1;

	if(p[0]=='-')
		f=-f;
	
	return f;
}
