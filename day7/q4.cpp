#include<stdio.h>
int main(){
	int month;
	scanf("%d",&month);
	printf("month:%d\n",month);
	switch(month){
		case 12:
    	case 1:
	    case 2:
	    printf("season:winter\n");
	    break;
	    case 3:
	    case 4:
	    case 5:
	    printf("season:spring\n");
	    break;
		case 6:
		case 7:
		case 8:
		printf("season:summer\n");
		break;
		case 9:
		case 10:
		case 11:
		printf("season:autumn\n");
		break;
	}
	
	return 0;
}
