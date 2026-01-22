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
		int n,arr[100],key,result,i;
		printf("Enter array of elements: ");
		scanf("%d",&n);
		printf("Enter %d elements: ");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		printf("Enter elements to search: ");
		scanf("%d",&key);
		result=linearsearch(arr,n,key);
		if(result!=-1){
			printf("Element is at %d index: ");
		}
		else{
			printf("Element is not found");
		}
	}
