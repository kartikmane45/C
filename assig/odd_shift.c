#include <stdio.h>
int main()
{
    int num, temp, r, rev=0,rev1=0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(temp=num; temp>0; temp/=10)
    {
        r = temp % 10;
        rev = rev*10 + r;
    }

    temp = rev;
    for(; temp>0; temp/=10)
    {
        r = temp % 10;
        if(r % 2 == 0)
            printf("%d", r);
    }
	rev1=0;
    temp = rev;
    for(; temp>0; temp/=10)
    {
        r = temp % 10;
        if(r % 2 != 0)
            printf("%d", r);
    }
	printf("\n");
}

