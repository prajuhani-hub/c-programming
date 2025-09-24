#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%2==0&&a%5==0&&a%8!=0)
	printf("%d is divisible by both 2 & 5 but not by 8",a);
	else
	printf("%d is not divisible by both 2 & 5 but not by 8",a);
	return 0;
}