#include<stdio.h>
int main(){
	int n,i,sum=0,avg;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr);
		sum+=arr[i];
		avg=sum/n;
	}
	printf("sum %d\n",sum);
	printf("avg %d\n ",avg);
	return 0;
}
