#include<stdio.h>
int main()
{
//	char s[10]="abcde";
	char s[5] ;
	printf("%ld\n", sizeof(s));
	scanf("%s",s);
	printf("%s\n", s);
	printf("%ld\n", sizeof(s));
//	printf(" %c\n", s[5]);
}


/*
#include<stdio.h>
int main()
{
	char s[100];
	printf("enter the string:");
	//scanf("%s",s);
	scanf("%[^\n]",s);

	printf("string is: %s\n", s);
}
*/

/*
#include<stdio.h>
int main()
{
	char s[100];
	printf("enter the string:");
	//scanf("%s",s);
	scanf("%[^\n]",s);
	int i,c=0;

	for(i=0;s[i];i++);
//	{
//	printf("%c ", s[i]);
//	c++;
//	}

	printf("\n%d\n",i);
}
// length of charcters are --- count of no.of charters all including /0 ---- remember that count start from 0
*/
