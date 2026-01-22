#include <stdio.h>
int linearSearch(int arr[], int key, int index, int size) {
    if (index >= size) {
        return -1;
    }
    if (arr[index] == key) {
        return index;
    }
    return linearSearch(arr, key, index + 1, size);
}

int main() {
    int n, key;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    int arr[n],i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i <n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter Element to search: ");
    scanf("%d", &key);
    int index = linearSearch(arr, key, 0, n);
    if (index != -1) {
        printf("Element is at  %d index.\n", index);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}
