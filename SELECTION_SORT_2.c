#include <stdio.h>
void combine(int arr[],int l,int m,int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int l1[n1],l2[n2];
    int i,j,k=0;
    for(i=0;i<n1;i++)  l1[i]=arr[l+i];
    for(i=0;i<n2;i++)   l2[i]=arr[m+1+i];
    i=0;j=0;k=l;
    while(i<n1 && j<n2 )
    {
        if(l1[i]<l2[j])
        {
            arr[k]=l1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=l2[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=l1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=l2[j];
        j++;
        k++;
    }
}
void divide (int arr[],int start,int end)
{
    if(start<end)
    {
        int mid =(start+end)/2;
        divide (arr,start,mid);
        divide(arr,mid+1,end);
        combine(arr,start,mid,end);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    divide(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
