#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("it is a vowel");
		break;
		default:
		printf("it is a consonant");
		break;
	}
	return 0;
}
