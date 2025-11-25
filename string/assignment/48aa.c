#include<stdio.h>
char* my_strcpy(char*, char*);
char* my_strchr(char* ,char);
int palin(char*, char*);
int mystr_len(char*);
int main()
{
	char s[100],*p,*q,*r,*n,*l;
	char i,j;
	printf("enter an string:");
	scanf("%[^\n]", s);

	p=s;

	while(q=my_strchr(p,' '))
	{
		if(palin(p,q-1))
		{
			my_strcpy(p,q+1);
		}
		p=q+1;
	}


		/*
		for(i=*p,j=*q;r<n;i++,j--)
		{
			if(i!=j)
				break;
		}
		if(i==j)
		{
			p=q+1;
			//      my_strcpy(p,q+1);       
		}
		else
		{
			my_strcpy(p,q);
		}

		//      my_strcpy(p,q); 


		//l=p;

		//              my_strcpy(l,q); 
	*/

	//      my_strcpy(p,q); 
	
	if(palin(p , mystr_len(p)-1))
		my_strcpy(p,mystr_len(p));
	

	printf("%s\n", s);

}
char* my_strcpy(char *k, char *m)
{
	int i;
	for(i=0;k[i];i++)
		k[i]=m[i];

	k[i]='\0';
}
char* my_strchr(char *p, char ch)
{
	while(*p)
	{
		if(*p==' ')
			return p;
		p++;
	}
	return 0;
}
int palin(char *p,char *q)
{
	while(p<q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q--;
	}
	return 1;
}
int mystr_len(char *p)
{
	int c=0;
	while(*p)
	{
		c++;
		p++;
	}
	return c;
}
