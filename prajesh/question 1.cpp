#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if((a%10)%3==0)
	printf("%d is yes",a%10);
	else 
	printf("%d is no",a%10);
	return 0;
}