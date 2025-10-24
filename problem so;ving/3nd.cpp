#include<stdio.h>
int main(){
	int n,arr[n];
	scanf("%d",&n);
	int pos=0,neg=0,zero=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if (arr[i]>0)
		pos++;
		else if(arr[i]<0)
		neg++;
		else
		zero++;
	}
	printf("postive %d\n",pos);
	printf("negative %d\n",neg);
	printf("zero %d\n",zero);
	return 0;
}
	
