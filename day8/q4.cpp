#include <stdio.h>
int main() {
    int n,digit,count=0,sum=0,product=1,temp;
    scanf("%d",&n);
    if (n<0)
        n= -n;
    temp=n;
    if(n==0){
        count=1;
        sum=0;
        product=0;
    } else {
        while(n>0){
            digit=n%10;  
            count++;             
            sum +=digit;        
            product *=digit;    
            n/=10;           
        }
    }
    printf("Count:%d\n",count);
    printf("Sum of digits:%d\n",sum);
    printf("Product:%d\n",product);
    return 0;
}

