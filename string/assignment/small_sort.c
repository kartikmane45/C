#include<stdio.h>
char* my_strchar(char*, char);
int my_strlen(char *p);
void sort(char *p, int *l);
int main()
{
	char s[200],*p,*q,*r;
	printf("enter strring:");
	scanf("%[^\n]",s);

	p=s;
	
	int i,l=0,len=0;
	for(l=0;s[l]!=32 && s[l]!='\0';l++);
	r=s; //<----------------------------**************------------------------

	if(s[l]=='\0')
	{
		printf("%s",s);
		return 0;
	}



	p=s+l+1;

	
	while(q=my_strchar(p, ' '))
	{
		len=q-p;
		if(len<l)
		{
			l=len;
			r=p;
//			sort(r, &l);
		}
	p=q+1;	
	}

	int last_len=my_strlen(p);

	
	if(last_len<=l)
	{
		r=p;
		sort(r, &last_len);
	}
	else
	{
		sort(r, &l);

	}

	

/*

	
	while(*r!=32 && *r!='\0')
	{
		printf("%c", *r);
		r++;
	}
	printf("\n");*/
	printf("%s\n",s);

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
int my_strlen(char *p)
{
	int c=0;
	while(*p)
	{
		c++;
		p++;
	}
	return c;
}
void sort(char *p, int *l)
{
	int i,j,c=0;
	for(i=0;i<*l-1;i++)
	{
		for(j=0;j<(*l-1)-i;j++)
		{
			if(p[j] >p[j+1])
			{
				char t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}

}


