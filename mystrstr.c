#include<stdio.h>
#include<string.h>
char *mystrstr(char*,char*);
int main()
{
	char s1[100],s2[100];
	puts("Input string 1:");
	fgets(s1,100,stdin);
	puts("Input string 2:");
	fgets(s2,100,stdin);
	s1[strlen(s1)-1]='\0';
	s2[strlen(s2)-1]='\0';
	printf("Index=%ld\n",mystrstr(s1,s2)-s1);
return 0;}
char *mystrstr(char *s1,char *s2)
{
	int i,j;
	for(i=0;s1[i];i++)
	{
		if(s1[i]==s2[0])
		{
			for(j=1;s2[j];j++)
			{
				if(s1[i+j]!=s2[j])
					break;
			}
		if(s2[j]=='\0')
			return s1+i;
		}
	}
	return NULL;
}


