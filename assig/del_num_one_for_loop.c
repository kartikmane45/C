
#include<stdio.h>
int main()
{
	int num,r1,r2,r3,d,temp;

	printf("enter an number:");
	scanf("%d", &num);
	printf("enter digit which you want to delete:");
	scanf("%d", &d);

	int rev =0, new=0,c=0;
	temp = 0;
	//d =5;
	for(;num;num = num /10)
	{	
		r1 = num % 10;
		if(r1 !=d)
		{

			rev = rev * 10 +r1;
			c++;
		}
	}
		L1:
		if(c>0)
		{
		
			r3 = rev % 10;
			rev = rev /10;
			new = new*10 + r3;
			c--;
			goto L1;
		}
	printf("%d\n", new);

}
