#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("uppercase char");
	else if(ch>=97&&ch<=122)
	printf("lower case char");
	else
	printf("it is a specialchar");
	return 0;
}
