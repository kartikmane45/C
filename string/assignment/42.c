#include<stdio.h>
char* my_str_chr(char*, char );
void my_strrev1(char *, char *);
void my_strrev(char *);
int main()
{
	char s[200],*p,*q,*r,ch,*d,i,j,*k;
	printf("enter string:");
	scanf("%[^\n]", s);

	p=s;


	while(q=my_str_chr(p, ' '))
	{
		
		for(k=q;k>=p;k--)
		{
			if(*k>=48 && *k<=57)
			{
				r=p;
				my_strrev1(r,q);	
				break;
			}	
		}
		p=q+1;
	}

	int c=0;
	while(*p)
	{
		c++;
		if(*p>=48 && *p<=57)
		{
			d=p-c+1;
			my_strrev(d);
		}
	p++;	
	}
	
//	my_strrev(d);
	
	printf("%s\n",s);

}
char* my_str_chr(char *k, char ch)
{

	while(*k)
	{
		if(*k == ' ')
			return k;
	k++;
	}
	return 0;

}
void my_strrev1(char *p, char *q)
{
	char t;
//	q=p;
//	while(*q)
//	q++;

	q--;
	
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}


}

void my_strrev(char *p)
{
	char t,*q;
	q=p;
	while(*q)
	q++;

	q--;
	
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}

}




