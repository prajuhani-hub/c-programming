#include<stdio.h>
int main(){
	int p,r,t,intrest;
	scanf("%d %d %d",&p,&r,&t);
	printf("profit(p):%d\n",p);
	printf("rate of intrest(r):%d\n",r);
	printf("time(t):%d\n",t);
	intrest=p*r*t/100;
	printf("simple intrest:%d\n",intrest);
	return 0;
}
