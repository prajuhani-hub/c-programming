#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0)
	printf("%d is divisible by 3",a);
	else if(a%7==0)
	printf("%d is divisible by 7",a);
	else
	printf("%d is not divisible by either 3 or 7",a);
	return 0;
}