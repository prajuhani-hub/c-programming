#include <stdio.h>
int main() {
    int num, lastDigit, nextDigit,ascending; 
    scanf("%d", &num);
    if (num < 0)
        num = -num; 
    lastDigit = num % 10;
    num = num / 10;
    while (num > 0) {
        nextDigit = num % 10;
        if (nextDigit > lastDigit) {
            ascending = 0;
            break;
        }
        lastDigit = nextDigit;
        num = num / 10;
    }
    if (ascending)
        printf("ascending order.\n");
    else
        printf("descending order\n");
    return 0;
}


