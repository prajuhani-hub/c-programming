#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	if(a>b&c)
	printf("a is greater");
	else if(b>a&c)
	printf("b is greater");
	else
	printf("c is greater");
	return 0;
}
