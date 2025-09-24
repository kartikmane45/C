#include<stdio.h>
char* my_strchar(char*, char);
int main()
{
	char s[200],*p,*q,*r;
	printf("enter strring:");
	scanf("%[^\n]",s);

	p=s;
	
	int i,l=0,len=0;
	for(l=0;s[l]!=32;l++);

//	printf("%d", l);
		
	p=s+l+1;
	while(q=my_strchar(p, ' '))
	{
		len=q-p;
		if(len<l)
		{
			l=len;
			r=p;
		}
		else
		{
			r=s;
		}
	p=q+1;	
	}
	
	while(*r!=32)
	{
		printf("%c", *r);
		r++;
	}
	printf("\n");

}
char* my_strchar(char *k,char ch)
{
	while(*k)
	{
		if(*k==' ')
			return k;
	k++;
	}
	return 0;


}
