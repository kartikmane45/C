#include<stdio.h>
void print_array(int *);
int main()
{
	int a[5]={10 ,20,30,40.50},ele;
	ele = sizeof(a)/sizeof(a[0]);

	printf_array(a,ele);

}
void print_array(int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
	printf("%d", *(p+i));
}
