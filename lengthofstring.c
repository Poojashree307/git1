#include<stdio.h>
void main()
{
	char s[101];
     scanf("%[^\n]s",s);
//	printf("%s",s);
	int count=0,i=0;
	for(i=0;s[i]!=0;i++)
		count++;
	printf("%d",count);
}
