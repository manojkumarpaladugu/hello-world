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
double myatof(const char *ptr)
{
	double r=0,i=0;
	short int flag=0;
	int factor=1;
	while(*ptr)
	{
		if(*ptr=='.')
		{
			flag=1;
			ptr++;
		}
		if(flag)
		{
			factor*=10;		
			i+=((float)(*ptr-'0'))/factor;
			printf("i=%f\n",i);
		}
		else
			r=r*10+((*ptr)-'0');
		ptr++;
	}
	return r+i;
}
int main()
{	
	double d;
	char *str;	
	printf("Input string:");
	str=getstring();
	d=myatof(str);
	printf("n=%f\n",d);
return 0;}
