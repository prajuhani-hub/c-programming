#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if((a/100)%2==0)
	printf("%d is even",a/100);
	else
	printf("%d is odd",a/100);
	return 0;
}