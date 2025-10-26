#include <stdio.h>
int main() {
	int n, i, key, pos= -1;
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
     scanf("%d", &arr[i]);
     printf("Enter the key to find: ");
     scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos= i;
        }
    }
    if(pos!=-1)
    printf("last occurrence of %d is at index %d\n", key,pos);
    else
    printf("-1\n");
    return 0;
}
