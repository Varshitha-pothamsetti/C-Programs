#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
	int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}
int main() {
    int n,arr[100],i,key,result; 
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter Element to search: ");
    scanf("%d", &key);
    result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element is at %d index\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
