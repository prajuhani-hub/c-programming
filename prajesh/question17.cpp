#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a%10==b%10)
	printf("%d the last digits are same",a);
	else
	printf("%d the last digits are not same",a);
	return 0;
}