#include <stdio.h>
void bubbleSort(int *arr, int num, int i) {
    if (num == 0 || i == num-1) {
        return;
    }
    if(arr[i] > arr[i+1]){
        int t = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = t;
        bubbleSort(arr,num,i+1);
    }
    
    bubbleSort(arr, num - 1,0);
}

int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n,0);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

