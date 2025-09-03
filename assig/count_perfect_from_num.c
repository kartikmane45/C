#include<stdio.h>
int main()
{
	int num, c=0,i,r1,temp, sum=0;
	printf("enter num: ");
	scanf("%d", &num);

	while(num)
	{
		r1 = num % 10;
		sum =0;
		i=1;
		while(i<r1)
		{
			if(r1 % i ==0)
				sum = sum +i;

				////it should if outside if
				i++;

		}
		if(sum == r1)
		{
			c++;
		}



		num = num /10;
	}

		printf("count of prime digit is: %d\n", c);

}
