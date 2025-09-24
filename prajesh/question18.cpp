#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>=0,a<=9)
	printf("%d is single digit",a);
	else if(a>=10,a<=99)
	printf("%d is two digit",a);
	else if(a>=99,a<=999)
	printf("%d is three digit",a);
	return 0;
	
}