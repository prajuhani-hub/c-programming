#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a&1==1)
	printf("%d is odd",a);
	else
	printf("%d is even",a);
	return 0;
}