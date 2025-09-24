#include<stdio.h>
const char* str_chr(const char *, char);
void my_strrev( char *, char*);
void my_strrev1( char *);
int main()
{
	char s[200];
	const char *p,*q,*r;
	printf("enter string:");
	scanf("%[^\n]",s);
	
	int l=0,len=4;
	p=s;	
	while(q=str_chr(p,' '))
	{
		l=q-p;
		if(l>=4)
		{
		//	r=p;
			my_strrev(p,q);
		}
		
	p=q+1;
	}
	my_strrev1(p);
	
/*	while(*r!=32)
	{
		printf("%c", r);
		r++;
	}
	printf("\n");*/
	printf("r=%u\n", r);
	printf("str=%s\n", s);

}

const char* str_chr(const char *k, char ch)
{
  
          while(*k)
          {
                  if(*k == ' ')
                          return k;
          k++;
          }
          return 0;
  
}
void my_strrev(char *k, char *q) 
{
	char t;
	q--;
	while(k<q)
	{
		t=*k;
		*k=*q;
		*q=t;
		k++;
		q--;
	}

}
void my_strrev1(char *k)
{
	char t,*n;
	n=k;
	while(*n)
	n++;

	n--;

	while(k<n)
	{
		t=*k;
		*k=*n;
		*n=t;
		k++;
		n--;
	}
}
