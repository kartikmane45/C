#include<stdio.h>
 int main()
 {
	 int num, fact =1, i;
	 printf("enter an number:");
	 scanf("%d", &num);

	 for(i = 2;i<num; i++)
	 {	
		 if(num % i == 0)
			 break;
	 }
	 if(num == i)
		 printf("prime number\n");
	else
		printf("not prime number\n");

 }
