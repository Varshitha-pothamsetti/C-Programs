#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void LinearSearch(int arr[], int len, int item)
{
int i;
 for( i=0;i < len;i++)
 {
 if(arr[i] == item)
 {
 printf("The value found at %d ", i);
 return;
 }
 }
 printf("-1");
}
int main() 
{
 int arr[] = {1, 2, 13, 3,4, 5,6};
 int len = sizeof(arr)/sizeof(arr[0]);
 int item = 13;
 LinearSearch(arr, len, item);
 return 0;
}
