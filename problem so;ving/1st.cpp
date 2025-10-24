#include<stdio.h>
int main(){
	int a,sum=0,reminder;
	scanf("%d",&a);
	printf("%d\n",a);
	while(a!=0){
		reminder=a%10;
		sum=sum+reminder;
		a=a/10;
	}
	printf("%d\n",sum);
	return 0;
	
}
