#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,distance;
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	distance= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("distance between two point:%d",distance);
	return 0;
}
