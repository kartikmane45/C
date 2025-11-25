#include<stdio.h>
int main()
{
//	double* const p=300;
//	int i=300, j=390;
//	char *const p=&i;
//	++*p;
//	(*p)++;
//	++(*p);
///////////////////////////////////
//	const int num =300;
//	char *p = &num;
//	++*p;
//	printf("%d\n", *p++);
//	printf("%d\n", *p);
////////////////////////////////////
//	int num=250;
//	unsigned char *p = &num;
//	num=*p+380;
//printf("%d\n", *p++);
//	printf("%d\n", *p);
///////////////////////////////////////'
//int ab=300;
//const char *p=&ab;
//*p++=ab+2;
//printf("%d\n", ab);
///////////////////////////////////////
/*
short int num=0xabcd;
short int *p=&num;
char *q=&num;
*(q+1)=*(p+1);

printf("%d\n", *q);
*/
//////////////////////////
/*
int abc = 0xABCDEF;
char *p=(char *)&abc+1;
++*--p;
(*p)++;
printf("%d\n", *(p+1));
printf("%d\n", *p);
printf("%d\n", *(p+2));
*/
////////////////////////////////
/*
//int a[6]={384,400,420,264,266},j;
int i=10,j;
char *p=&i;
j=*p++;
printf("%d\n", j);
j=(*p)++;
printf("%d\n", j);
j=*++p;
printf("%d\n", j);
j=++*--p;
printf("%d\n", j);
*/
/////////////////////////
int i=44,j=200;
char *p=&i;
*++p=(i==j)||(i==44);
printf("%d\n", *p);
printf("%d\n", i);

/////////////////////////
/*
int num=0xABCDE;
char *p=&num;
while(*++p)
	printf("%d\n", *p);

*/
/*
int num;
printf("enter num:");
scanf("%d", &num);

int result;
result = num ^ 2;
printf("result=%d", result);
*/
//////////////////////////
/*
int i='A';
void *p=&i;
//printf("%d\n", *(char*)p);
//printf("%d\n", *(short int*)p);
printf("%d\n", (int*)+8);
*/
//////////////////////////

}
