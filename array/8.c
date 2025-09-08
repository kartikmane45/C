#include<stdio.h>
int main()
{
	int i,j,ele,*p;
	unsigned temp,pos,bit,r1,r2;
	printf("ele:");
	scanf("%d", &ele);
	int a[ele];
	
	p=a;

	for(i=0;i<ele;i++)
		scanf("%d", (p+i));

	printf("before\n");	
	for(i=0;i<ele;i++)
		printf("%d ", *(p+i));

	printf("\nenter an position and and no of bits want to deletei:\n");
	scanf("%d %d", &pos, &bit);

	for(i=0;i<ele;i++)
	{
		temp=*(p+i);

		r1 = temp<< (32 -pos);
		r1 = r1 >> (32 -pos);

		r2 = temp >> (pos+bit);
		r2 = r2 << pos;

		temp = r1 | r2 ;

		printf("%d ", temp);
	}
	printf("\n");





}
