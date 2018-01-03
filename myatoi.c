//implementation of atoi
#include<stdio.h>
#include<stdlib.h>
void *getstring()
{
	int i=0;
	char *p=NULL;
	do{
	p=realloc(p,(i+1));
	p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}
int myatoi(const char *ptr)
{
	int n=0,flag=0;
	if(*ptr=='-')
	{
		flag=1;
		ptr++;
	}
	while(*ptr)
	{
		n=n*10+((*ptr)-'0');
		ptr++;
	}
	if(flag==1)
		return n+2*n*-1;
	else
		return n;
}
int main()
{	
	int n;
	char *str;	
	str=getstring();
	n=myatoi(str);
	printf("n=%d\n",n+1);
return 0;}
