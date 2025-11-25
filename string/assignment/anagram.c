#include<stdio.h>
//int anagram(char *p, char*q);
void str_sort(char *p);
int str_cmp(char *p, char *q);
void rem_spl(char *p);
void upr_low(char *p);
int main()
{
	char s[200], m[200];
	printf("enter an first string:");
	scanf("%s", s);
	printf("enter string 2:");
	scanf("%s",m);

	char *p,*q,t;
	p=s;
	q=m;

	int len1, len2,i,j,k;

	rem_spl(s);
	rem_spl(m);

	upr_low(s);
	upr_low(m);

	for(len1=0;p[len1];len1++);
	for(len2=0;p[len2];len2++);

	if(len1!=len2)
		printf("No it not anagram!!!!\n");


	str_sort(p);
	str_sort(q);

	int r;
	r=str_cmp(p,q);
	if(r==1)
		printf("YES IT IS ANAGRAM\n");
	else
		printf("NO IT NOT ANAGRAM\n");


}
void upr_low(char *p)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]>='A' && p[i]<='Z')
			p[i]=p[i]+32;
	}

}
void str_sort(char *p)
{
	int len1, len2,i,j,k;
	char t;
	for(len1=0;p[len1];len1++);
	for(i=0;i<len1-1;i++)
	{
		for(j=0;j<len1-i-1;j++)
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
	}
}
int str_cmp(char *p, char *q)
{
	while(*p && *q)
	{
		if(*p!=*q)
			return 0;
		p++;
		q++;
	}
	return 1;
}
void rem_spl(char *p)
{
	int i,j,k;
	for(i=0;p[i];i++)
	{
		for(j=i;p[j];j++)
		{ 
			if(!((p[i]>='A' && p[i]<='Z') || (p[i]>='a' && p[i]<='z') ||(p[i]>=48 && p[i]<=57) ))
			{
				for(k=j;p[k];k++)
					p[k]=p[k+1];
				j--;
			}
		}
	}
}
