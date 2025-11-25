#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll_no;
    char *name;
    float marks;
};

int perfect(struct student *p); 
void reverse(struct student *p);
void main(int argc, char **argv)
{
    FILE *fp = fopen(argv[1], "r");

    int n = 5;
    struct student *p[n];
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        p[i] = malloc(sizeof(struct student));
        p[i]->name = malloc(50);

        fscanf(fp, "%d %s %f",
               &p[i]->roll_no,
               p[i]->name,
               &p[i]->marks);
    }
    for(i = 0; i < n; i++)
    {
        if(perfect(p[i]))
            count++;

            reverse(p[i]);
    }

    printf("Perfect roll count = %d\n\n", count);

fclose(fp);
///here i want to put that modified data in file
FILE *fd=fopen(argv[1], "w");
for(i=0;i<n;i++)
fprintf(fd,"%d %s %f\n", p[i]->roll_no, p[i]->name,p[i]->marks);


}


int perfect(struct student *p)
{
    static int i = 1, sum = 0;
    int n = p->roll_no;

    if(i < n)
    {
        if(n % i == 0)
            sum += i;

        i++;

        return perfect(p);
    }
    else
    {
        int result = (sum == n);

        i = 1;
        sum = 0;

        return result;
    }
}
void reverse(struct student *p)
{
	char *s=p->name;
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}

	char first=s[0];

	int last=i-1;


	if(first>='A' && first<='Z')
		first=first+32;


	if(first=='a' || first=='e' || first=='i' || first=='o' || first=='u')
	{
		int j=0;
		while(j<last)
		{
			char t=s[j];
			s[j]=s[last];
			s[last]=t;
			j++;
			last--;
		}
	}


}

