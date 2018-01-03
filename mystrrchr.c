#include<stdio.h>
#include<string.h>
char *mystrchr(const char*,int);
int main()
{
	char str[100],c;
	puts("Input string:");
	fgets(str,100,stdin);
	str[strlen(str)-1]='\0';
	puts("Input character:");
	scanf("%c",&c);
	printf("Index=%ld\n",mystrchr(str,c)-str);
return 0;}
char *mystrchr(const char *str,int c)
{
	char *ptr=(char *)str,*adr;
	while(*ptr++)
		if(*ptr==(char)c)
			adr=ptr;
	if(*ptr=='\0')
		return adr;
	return NULL;
}
