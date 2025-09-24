#include<stdio.h>
int main()
{
	char s[200];
	int i,j,k,l=0,c=0;
	printf("enter string:");
	scanf("%s", s);

	l=0;
	i=0;
	/*
	   for(i=0;s[i];i++)
	   {
	   for(j=i;s[j]!=32  s[j]=='\0';j++)
	   c++;

	   if(c>l)
	   {
	   l=c;
	   c=0;
	   }

	   }
	 */
	int idx,strt,end;
	for(i=0;s[i];i++)
	{
		/*if((s[i]!=' ' && s[i-1]==' ') || (i==0&&s[i-1]!=' '))
		  {	idx=i;
		  c++;
		  printf("Index=%d\n",idx);
		  }*/
		//c++;
		/*if(s[i+1]==' ' || s[i+1]=='\0')
		{
			for(j=i;s[j-1]!=' '&&j!=0;j--);	
			if(c>l)
			{
				strt=j;
				l=c;
				c=0;
				end=i;
			}


		}
		// else
			c++;*/
		if(s[i]!=' '){
			if(c=0)
				idx=i;
			c++;
		}else{
			if(c>l){
				l=c;
				strt=idx;
				end=i-1;
			}
		}
	}

	if(c>l){
		l=c;
		strt=idx;
		end=i-1;
	}
	printf("%d %d \n",strt,end);
	for(k=strt;k<=end;k++)
	{
		printf("%c", s[k]);
	}

}
