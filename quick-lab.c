#include<stdio.h>
#include<conio.h>
int partition(int a[50],int beg,int end);
void quicksort(int a[50],int beg,int end);
void main()
{
int arr[50],i,n;
printf("\n enter the no.of elements");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
 }
 quicksort(arr,0,n-1);
 printf("\n The sorted arry is\t");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
 } 
 getch();
}
int partition(int a[50],int beg,int end)
{
int left,right,temp,loc,flag;
loc=left=beg;
right=end;
flag=0;
while(flag!=1)
{
while((a[loc]<=a[right]) && (loc!=right))
right--;
if(loc==right)
flag=1;
else if(a[loc]>a[right])
{
temp=a[loc];
a[loc]=a[right];
a[right]=a[temp];
loc=right;
}
if(flag!=1)
{
while((a[loc]>=a[left]) && (loc!=left))
left++;
if(loc==left)
flag=1;
else if(a[loc]<a[left])
{
temp=a[loc];
a[loc]=a[left];
a[left]=a[temp];
loc=left;
}
}
}
return loc;
}
void quicksort(int a[50],int beg,int end)
{
int loc;
if(beg<end)
{
loc=partition(a,beg,end);
quicksort(a,beg,loc-1);
quicksort(a,loc+1,end);
}
}
