#include<stdio.h>
int main()
{
	char c;
	int i;
	short int s;
	float f;
	double e;

	printf("%ld\n",2+sizeof(f));
	printf("%ld\n",sizeof(c + i));
	printf("%ld\n",sizeof(c + s));
	printf("%ld\n",sizeof(c + 3.0));


	
	printf("%ld\n",sizeof(c,s,e));
	printf("%ld\n",sizeof(e,c)+4); // (group first) right most + 4
	printf("%ld\n",sizeof(0x11)); // 4
	printf("%ld\n",sizeof(011)); //4

	
	printf("%ld\n",sizeof(1 + 1.0)); //8
	printf("%ld\n",sizeof('a')); //4
	printf("%ld\n",sizeof(c)); //1
	printf("%ld\n",sizeof(55.5)); //8
	return 0;
}
