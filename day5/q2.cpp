#include<stdio.h>
int main(){
	//area of rectangle
	int length,breath,area1;
	scanf("%d %d",&length,&breath);
	area1=(length*breath);
	printf("area of rectangle:%d",area1);
	//area of square
	int side,area2;
	scanf("%d",&side);
	area2=(side*side);
	printf("area of square:%d",area2);
	//area of triangle
	int base,height,area3;
	scanf("%d %d",&base,&height);
	area3=0.5*base*height;
	printf("area of triangle:%d",area3);
	//area of circle
	int radius,area4;
	scanf("%d",&radius);
	area4=3.14*radius*radius;
	printf("area of circle:%d",area4);
	return 0;
}

