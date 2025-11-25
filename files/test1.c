#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char **s);
int prime(int *p);
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("USAGE: ./a.out filename\n");
		return 0;
	}

	FILE *fp = fopen(argv[1], "r");
	if (fp == 0)
	{
		printf("file is not present\n");
		return 0;
	}

	int c = 0, l = 0,line=0;
	char ch;

	while ((ch = fgetc(fp)) != EOF)
	{
		c++;
		if (ch == '\n')
		{
			line++;
			if (c > l)
				l = c;
			c = 0;
		}
	}

	rewind(fp);

	char **p = malloc(sizeof(char *) * (line+1));
	int i;
	for (i = 0; i < line; i++)
	{
		p[i] = malloc(sizeof(char) * (l + 1));
		fgets(p[i], l + 1, fp);
	}

	fclose(fp);

	reverse(p);

	FILE *fd = fopen(argv[1], "w");
	if (fd == 0)
	{
		printf("file is not present\n");
		return 0;
	}

	for (i = 0; i <line; i++)
	{
		fputs(p[i], fd);
	}

	fclose(fd);

	/*    // Free allocated memory
	      for (i = 0; i < line; i++)
	      free(p[i]);
	      free(p);

	      return 0;*/
}

void reverse(char **s)
{

	int i,j,start,end,c,fn;
	char t;
	for(i=0;s[i]!=NULL;i++)
	{
		j=0;
		fn=0;
		while(s[i][j]!='\0' && fn==0)
		{
			while(s[i][j]==' ' || s[i][j]=='\n')
				j++;
			if(s[i][j]=='\0')
				break;

			start=j;
			c=0;

			while(s[i][j] !=' ' && s[i][j]!='\n' && s[i][j]!='\0')
			{
				c++;
				j++;
			}
			if(prime(&c))
			{
				end=start+c-1;
				while(start<end)
				{
					t=s[i][start];
					s[i][start]=s[i][end];
					s[i][end]=t;
					start++;
					end--;
				}
				fn=1;
			}

		}
	}
}

int prime(int *p)
{
  /* int i, n = *p;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
*/
static int i=1,c=0;
int n=*p;
if(i<=n)
{
	if(n%i==0)
	c++;

	i++;
	prime(p);

	

}
else
{

//	int res;
	if(c==2)
	{
		i=1;
		c=0;
		return 1;
	}
	else
	{
		i=1;
		c=0;
		return 0;
	}
}
}

