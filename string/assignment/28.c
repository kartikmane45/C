#include<stdio.h>
int main()
{
	char s[20];
	int len,c=0,b=0;
	printf("enter string:");
	scanf("%[^\n]",s);

	printf("string: %s\n",s);
	
	for(len=0;s[len];len++);
	int i,j,k;
	/*
	for(i=len-1;s[i]!=32;i--);
	c=i+1;	*/
	for(i=len-1;s[i]!=32;i--)
	c++;	

	
	
	for(k=len-c,j=len-1;k<j;k++,j--)
	{
		int t=s[k];
		s[k]=s[j];
		s[j]=t;
	}
	s[len]='\0';

/*

	for(k=c,j=len-1;k<j;k++,j--){
		
		int t=s[k];
		s[k]=s[j];
		s[j]=t;
		}
	s[len]='\0';
*/

	printf("revrse is:%s\n",s);

	



}
