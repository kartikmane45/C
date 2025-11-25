#include<stdio.h>
char* my_strchr(char *p,char ch);
int main()
{
	char s[100],*p,*q, ch;
	printf("enter string:");
	scanf("%[^\n]", s);
	printf("enter char:");
	scanf(" %c", &ch);

	p=s;


	int r=my_strchr(p,ch);
	if(r)
		printf("yesssss and p=%u & %u\n",p,r);
	else
		printf("nooooo\n");

}
char* my_strchr(char *p,char ch)
{
/*	if(*p!='\0')
	{
		if(*p==ch)
			return p;
	}
	else
	{
		return 0;
	}*/

	if(*p =='\0')
		return 0;
	if(*p==ch)
		return p;


		return my_strchr(p+1,ch);


}
