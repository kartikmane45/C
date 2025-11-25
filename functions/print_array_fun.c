#include<stdio.h>
void print_array(int *);
int main()
{
	int a[5]={10 ,20,30,40.50},*p;

	printf_array(a);

}
void print_array(int *p)
{
	int i;
	for(i=0;i<5;i++)
	printf("%d", *(p+i));
}
