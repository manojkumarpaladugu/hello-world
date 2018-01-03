#include<stdio.h>
#include<string.h>
char *mystrncpy(char*,const char*,int);
int main()
{
	char src[100],dest[100];
	int n;
	puts("Input source string:");
	fgets(src,100,stdin);
	puts("Input destination string:");
	fgets(dest,100,stdin);
	src[strlen(src)-1]='\0';
	dest[strlen(dest)-1]='\0';
	printf("Input size:");
	scanf("%d",&n);
	printf("src=%s dest=%s\n",src,mystrncpy(dest,src,n));
return 0;}
char *mystrncpy(char *dest,const char *src,int n)
{
	char *ptr=dest;
	while(n--)
		*ptr++=*src++;
	return dest;
}

