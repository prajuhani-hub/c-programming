#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("a:%d\n",a);
	printf("b:%d\n",b);
	if(a>b)
	printf("a is greater:%d\n",a);
	else
	printf("a is smaller:%d\n",a);
	
	if(b>a)
	printf("b is greater:%d\n",b);
	else
	printf("b is smaller:%d\n",b);
	return 0;
}
