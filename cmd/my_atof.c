#include<stdio.h>
float my_atof(char *p);
int main(int argc, char **argv)
{
	float f;
	f=my_atof(argv[1]);
	printf("float is=%f\n", f);
}
float my_atof(char *p)
{
	int i,num=0,num1=0,d=1;
	float f;

	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;


	for(;p[i]!='.';i++)
	{
		if(p[i]>=48 && p[i]<=57)
			num=num*10+p[i]-48;
		else
			break;
	}

	for(i=i+1;p[i];i++)
	{
		if(p[i]>=48 && p[i]<=57)
		{
			num1=num1*10+p[i]-48;
			d=d*10;
		}
		else
		{
			break;
		}
	}

	float f1=(float)num1/d; ///----> we have to give float output

	if(p[0]=='-')
		num=-num;

	f= num+f1;
return f;
}
