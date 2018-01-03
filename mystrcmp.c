#include<stdio.h>
#include<string.h>
int mystrcmp(const char*,const char*);
int main()
{
	char str1[100],str2[100];
	int n;
	puts("Input string1:");
	fgets(str1,100,stdin);
	puts("Input string2:");
	fgets(str2,100,stdin);
	str1[strlen(str1)-1]='\0';
	str2[strlen(str2)-1]='\0';
	if(mystrcmp(str1,str2)==0)
		printf("both strings are identical\n");
	else
		printf("both strings are not identical\n");
return 0;}
int mystrcmp(const char *s1,const char *s2)
{
	while(*s1==*s2)
	{
		if(*s1=='\0')
			return 0;
		s1++;
		s2++;
	}
	return (*s1-*s2);		
}
