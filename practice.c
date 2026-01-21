#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
	int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; 
    }
	return -1;
}
int main(){
	int arr[100],key,result,i,n;
	printf("Enter array of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter elements to search: ");
	scanf("%d",&key);
	result=linearsearch(arr,n,key);
	if(result!=-1){
		printf("element at %d is found");
	}
	else{
		printf("element not found");
	}
}
