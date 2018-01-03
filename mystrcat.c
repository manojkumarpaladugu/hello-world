#include<stdio.h>
#include<string.h>
char *mystrcat(char*,const char*);
int main()
{
	char src[100],dest[100];
	puts("Input source string:");
	fgets(src,100,stdin);
	puts("Input destination string:");
	fgets(dest,100,stdin);
	src[strlen(src)-1]='\0';
	dest[strlen(dest)-1]='\0';
	printf("dest=%s\n",mystrcat(dest,src));
return 0;}
char *mystrcat(char *dest,const char *src)
{
	char *temp=dest;
	while(*dest)
		dest++;
	while(*dest++=*src++);
	return temp;			
}
