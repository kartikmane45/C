#include<stdio.h>
int main()
{
	char s[20];
	int len,c=0,b=0;
	printf("enter string:");
	scanf("%[^\n]",s);

	printf("string: %s\n",s);
	
	int i,j,k;
	
	for(i=0;s[i]!=' ';i++);
	
	for(k=0,j=i-1;k<j;k++,j--){
		int t=s[k];
		s[k]=s[j];
		s[j]=t;
		}
	

	printf("revrse is:%s\n",s);

	



}
