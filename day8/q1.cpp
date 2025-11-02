#include <stdio.h>
int main() {
    int num, digit;
    int max = 0,min = 9;
    int temp;
    scanf("%d", &num);
    if (num < 0){
        num = -num;
    }
    if (num == 0) {
        printf("max = 0\n");
        printf("min = 0\n");
        return 0;
    }
    temp = num;
    while (num > 0) {
        digit = num % 10;
        if (digit > max)
            max = digit;
        if (digit < min)
            min = digit;
        num = num / 10;
    }
    printf("\nNumber: %d", temp);
    printf("\nLargest digit = %d", max);
    printf("\nSmallest digit = %d\n", min);
    return 0;
}
