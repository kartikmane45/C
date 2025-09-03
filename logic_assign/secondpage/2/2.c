#include<stdio.h>
 int main()
 {
	 int num, fact =1;

	 printf("enter an number:");
	 scanf("%d", &num);

	 for(int i =1; i<=num;i++)
	 {	
		 if(num % i == 0)
			 printf("%d, " , i);
	 }
 }
