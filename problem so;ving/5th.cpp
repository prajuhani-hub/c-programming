#include<stdio.h>
int main() {
    int n, i, key, pos= 0;
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
     scanf("%d", &arr[i]);
     printf("Enter the key to find: ");
     scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("first occurrence of %d is at index %d\n", key, i);
            pos= 1;
            break;
        }
    }
    if(pos == 0)
    printf("-1\n");
    return 0;
}
	
	

