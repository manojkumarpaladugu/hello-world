#include<stdio.h>
int mystrlen(const char*);
int main()
{
	char str[100];
	puts("Input string:");
	fgets(str,100,stdin);
	str[mystrlen(str)-1]='\0';
	printf("lenth=%u\n",mystrlen(str));
return 0;}
int mystrlen(const char *str)
{
	int cnt=0;
	while(*str++)
		cnt++;
	return cnt;
}
