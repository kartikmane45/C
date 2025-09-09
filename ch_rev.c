#include<stdio.h>
int main()
{
	char s[10];
	printf("enter an string:");
	scanf("%s",s);
//	printf("string is:%s\n",s);
	int len,i;
	for(len=0;s[len];len++);

	printf("after reversingi:");
	for(i=len-1;i>=0;i--)
		printf("%c ",s[i]);
	printf("\n");


}
