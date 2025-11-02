#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	printf("%c",ch);
	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	printf("%c is alphabet");
	else if (ch>=0&&ch<=100)
	printf("%c is digit");
	else
	return 0;
}
