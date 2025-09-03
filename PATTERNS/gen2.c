#include<stdio.h>
int main()
{
	int i ,j,num,k,c=0,l,n;

	printf("enter an number:");
	scanf("%d", &n);

//	printf("enter num from which you want printf that patter:");
//	scanf("%d", &num);

	for(i=0;i<n;i++)
	{
		num =53;
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n-i;)
		{
			//num =2;
			c=0;
			for(l=1;l<=num;l++)
			{
				if(num % l ==0)
					c++;
			}
			if(c==2)
			{
				printf("%d ", num);
				k++;
			}
			num++;



		}

	printf("\n");
	}
}
