
void main()
{
	int i;
	char s1[100];
	char s2[100];

	printf("enter an string:");
	scanf("%s",s1);
	printf("enter an string:");
	scanf("%s",s2);


	for(i=0;s1[i] && s2[i];i++)
	{
		if(s1[i]!=s2[i])
			break;
	}

	if(s1[i]==s2[i])
		printf("string is eaual");
	else
		printf("string is not eaual");

	printf("\n");
}

