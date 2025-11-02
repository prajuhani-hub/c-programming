#include<stdio.h>
int main(){
	int mark;
	scanf("%d",&mark);
	if(mark>=90&&mark<=100)
	printf("A grade");
	else if(mark>=75&&mark<90)
	printf("B grade");
	else if(mark>=30&&mark<75)
	printf("C grade");
	else if(mark<30)
	printf("fail");
	return 0;
}
