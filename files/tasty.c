#include<stdlib.h>
#include<stdio.h>
typedef struct stud 
{
	int  roll;
	char s[20];
	float marks;
};
int main()
{
	int n;
	printf("enter no. of students:");
	scanf("%d", &n);
	struct stud **p;
	dyn(&p,&n);
	
}
void dyn(struct stud ***p, int *n)
{
	int k=*n;
	*p=malloc(sizeof(struct stud *)*k);
	**p=malloc(sizeof(struct stud)*k);
	printf("enter details:");
	scanf("%d %s %f", &(**p)->roll, (**p)->s, &(**p)->marks);
	printf("%d %s %f\n", (* *p)->roll, (**p)->s, (**p)->marks);
}

