#include<stdio.h>
int main()
{
	int i,j,k,len;
	char s[200];
	printf("enter an string:");
	scanf("%[^\n]", s);

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
			for(k=j;s[k];k++)
				s[k]=s[k+1];
			//{
			//	if(s[j]==s[k])
	//				s[k]=s[k+1];
			//}
			//--;
			j--;
			}
	//	j--;		
		}
	//	i--;
	}

	printf("s=%s\n", s);
	
}

