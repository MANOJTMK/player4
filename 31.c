#include <stdio.h>
int main(void) 
{
	char s[20];
	int i,a=0,b=0;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(')
		{
			a++;
		}
		else if(s[i]==')')
		{
			b++;
		}
	}
	if(a==b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
