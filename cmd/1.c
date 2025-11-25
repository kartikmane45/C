#include<stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
	if(argc !=2)
	{
		printf("usage:./a.out string\n");
		return;
	}
	int len=strlen(argv[1]);
	printf("len=%d\n",len);
}
