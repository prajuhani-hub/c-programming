#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("'%c' is uppercase\n",ch);
	else if(ch>='a'&&ch<='z')
	printf("'%c' is lowercase\n",ch);
	else if(ch>='0'&ch<='100')
	printf("'%c' is digit\n",ch);
	else
	printf("'%c' is special symbol");
	return 0;
}
