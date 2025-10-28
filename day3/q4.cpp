#include<stdio.h>
int main(){
	int n,lastdigit,exceptlast;
	scanf("%d",&n);
	printf("%d\n",n);
	lastdigit=n%10;
	exceptlast=n/10;
	printf("last digit: %d\n",lastdigit);
	printf("except last digit: %d\n",exceptlast);
	return 0;
}
