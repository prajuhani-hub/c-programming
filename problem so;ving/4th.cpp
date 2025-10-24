#include<stdio.h>
int main(){
	int n,i,arr[n],min,max;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		max=min=arr[0];
	}
	for(int i=1;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
		else if(arr[i]<min)
		min=arr[i];
	}
	printf("maximum %d\n",max);
	printf("minimum %d\n",min);
	return 0;
}
