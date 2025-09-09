#include<stdio.h>
int main()
{
	char s[100];
	printf("enter an string:");
	scanf("%[^\n]",s);
//	scanf("%s",s);
	printf("string is:%s\n",s);
	int len,i,j,t;
	for(len=0;s[len];len++);
	printf("%d\n", len);
	printf("after reversingi:");
	for(i=0,j=len-1; i<j  ;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("%s", s);
	
	printf("\n");


}
