#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, count = 1;
    printf("Enter a sentence: ");
    gets(str);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }
    printf("Number of words in the sentence: %d\n", count);
    return 0;
}

