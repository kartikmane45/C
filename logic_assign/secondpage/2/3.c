#include<stdio.h>
 int main()
 {
	 int num, pow=1, r;

	 printf("enter an number:");
	 scanf("%d", &num);

	 printf("enter which power:");
	 scanf("%d", &r);

	 for(int i =1; i<=r;i++)
	 {
		 pow = pow * num;
	 }
	 printf("enter an number: %d\n", pow);
 }
