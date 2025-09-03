#include<stdio.h>
int main()
{
	int i,j,k,m,n,l;
	char c;
	printf("enter no.of rows:");
	scanf("%d", &n);
//	printf("enter an chacrter from which you have to print:");
//	scanf(" %c", &c);

	//for(i=0,l=c;i<n;l--,i++)
	for(i=n;i>0;i--)
	{
	//	m=0;
		for(j=0;j<=n-i;j++)
			printf(" ");
		/*	
		for(k=0;k<n-i;k++)
		{
				printf("%c ", l-m);
				m++;
		}
		*/
	/*	
		for(k=c-i;k>='A';k--)
		{
			 printf("%c ", k);
		}
		*/

		for(k=i-1;k>=0;k--)
		{
			printf("%c ", 'A'+k);
		}
		printf("\n");
	}
}
