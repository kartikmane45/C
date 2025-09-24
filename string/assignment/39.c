#include<stdio.h>
void main(){

	char s[100];
	printf("Enter the string:\n");
	scanf("%[^\n]",s);

	int i=0,max_start=0,length=0,end=0,start=0,len=0;
	for(i=0;s[i];i++){
		if(s[i]!=' '){
			if(len==0)
				start=i;
			len++;	
		}else{
			if(len>length){
				length=len;
				max_start=start;
				end=i;
			}
			len=0;
		}
	}

	if(len>length){
		length=len;
		max_start=start;
		end=i;
	}
	for(int k=max_start;k<end;k++)
		printf("%c",s[k]);
	printf("\n");

}
