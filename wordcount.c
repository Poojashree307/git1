#include<stdio.h>
int wordcount(char* gs)
{
	int count=0;
	int i;
	for(i=0;gs[i]!=0;i++)
	
		if(gs[i]==' ')
			count++;
		return count+1;
}

void main()
{
	char s[100];
	int count;
	scanf("%[^\n]s",s);
	count=wordcount(s);
	printf("%d",count);
}
