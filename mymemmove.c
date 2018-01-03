#include<stdio.h>
#include<string.h>
void *mymemmove(void *dest,const void *src,int n);
int main()
{
	char src[100],dest[100];
	int n,pos;
	puts("Input source string:");
	fgets(src,100,stdin);
	puts("Input destination string:");
	fgets(dest,100,stdin);
	src[strlen(src)-1]='\0';
	dest[strlen(dest)-1]='\0';
	printf("Input size:");
	scanf("%d",&n);
	printf("Input position:");
	scanf("%d",&pos);
	mymemmove(dest,dest+6,n);
	printf("dest=%s\n",dest);
return 0;}
void *mymemmove(void *dest,const void *src,int n)
{
	int i;
	char *ptr1=(char*)src;
	char *ptr2=(char*)dest;
	char temp[n];
	strncpy(temp,ptr1,n);
	for(i=0;i<n;i++)
		*(char*)dest++=temp[i];
}

