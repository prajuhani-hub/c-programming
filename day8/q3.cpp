#include <stdio.h>
int main(){
	int n,factorial=1;
	scanf("%d",&n);
	if(n<0)
	printf("factorial is not defined");
	else
	for(int i=1;i<=n;i++){
		factorial=factorial*i;
	}
	printf("factorial:%d",factorial);
	return 0;
}
