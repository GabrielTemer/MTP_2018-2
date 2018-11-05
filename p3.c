//Gabriel Temer Nascimento 

//11811ETE011

//p3.c

#include <stdio.h>
int main()
{
	char str[256];
	int cum=0, i=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&& str[i]<='9')
		cum = cum*10 + str[i]-'0';
	}
	printf("%d",cum);
}
