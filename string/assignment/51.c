#include<stdio.h>
char* my_strchr(char* , char);
void my_del(char*, char*);
int  my_strlen(char*);
//char* my_str_ls_len(char*);
int main()
{
	char s[100], *p,*q,*r,*n;
	printf("enter string:");
	scanf("%[^\n]", s);

	p=s;

	int l=0,len=0,las_len=0;
	while(q=my_strchr(p,' '))
	{
		l=q-p;
		if(l>len)
		{
			len=l;
			r=p;
	//	n=my_strchr(r,' ');
//			my_del(r,q+1);   here not why beacuse firstr letter length is always greater than 0 so it will delete that first letter also
			

			//// where we get largest their store address in r
//		p=s;
		}
		p=q+1;
	
	}

	las_len=my_strlen(p); 
          if(las_len>len)
	  {
              	r=p;
//		n=p+las_len;
		my_del(r,r+las_len);
	  }
	 
	  else
	  {
//		n=my_strchr(r,' ');
		my_del(r,my_strchr(r,' ')+1);
	  }
	  
	printf("now=%s\n", s);
	

}
char* my_strchr(char *p,char ch)
{
	while(*p)
	{
		if(*p==' ')
			return p;
		p++;
	}
	return 0;
}
void my_del(char *p, char *q)
{
	while(*p++=*q++);
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
/*
char* my_str_ls_len(char *p)
{
	while(*p)
	{
		p++;
	}
	return p;
}
*/
