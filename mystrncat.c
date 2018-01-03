#include<stdio.h>
#include<string.h>
char *mystrncat(char*,const char*,int);
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
	printf("s1=%s\n",mystrncat(dest,src,n));
return 0;}
char *mystrncat(char *dest,const char *src,int n)
{
	char *temp=dest;
	while(*dest)
		dest++;
	while(n--)
		*dest++=*src++;
	*dest='\0';
	return temp;			
}
