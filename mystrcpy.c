#include<stdio.h>
#include<string.h>
char *mystrcpy(char*,const char*);
int main()
{
	char src[100],dest[100];
	puts("Input source string:");
	fgets(src,100,stdin);
	puts("Input destination string:");
	fgets(dest,100,stdin);
	src[strlen(src)-1]='\0';
	dest[strlen(dest)-1]='\0';
	printf("src=%s dest=%s\n",src,mystrcpy(dest,src));
return 0;}
char *mystrcpy(char *dest,const char *src)
{
	char *ptr=dest;
	while(*ptr++=*src++);
	return dest;
}

