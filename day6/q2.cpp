#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("a:%d\n",a);
	printf("b:%d\n",b);
	printf("c:%d\n",c);
	if (a>b&c)
	printf("a is greater:%d\n",a);
	else
	printf("a is smaller:%d\n",a);
	if(b>a&c)
	printf("b is greater:%d\n",b);
	else
	printf("b is smaller:%d\n",b);
	if(c>a&b)
	printf("c is greater:%d\n",c);
	else
	printf("c is smaller:%d\n",c);
	return 0;
}
