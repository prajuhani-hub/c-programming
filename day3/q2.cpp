#include<stdio.h>
int main(){
	int a,b,temp;
	scanf("%d %d",&a,&b);
	printf("before:%d %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after:%d %d\n",a,b);
	return 0;
}
