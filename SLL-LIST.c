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
printf("\nenter your option: "); 
scanf("%d",&option);
switch(option)
{
case 1:
start = createll(start);
printf("\n linked list is created");
break;
case 2:
display (start);
break;
case 3:
start = insert_beg(start);
break;
case 4:
start= insert_end(start);
break;
case 5:
start = insert_after(start);
break;
case 6:
start=insert_before(start);
break;
case 7:
start = delete_beg(start);
printf("\n first node successfully deleted");
break;
case 8:
start = delete_end(start);
printf("\n Last node successfully deleted");
break;
case 9:
start = delete_after(start);
printf("\n Node successfully deleted");
break;
}
}while(option != 10);
}
struct node* createll(struct node* start) 
{
struct node *newnode; 
struct node *ptr;
int num;
printf("\n enter the data or -1 to end: "); 
scanf("%d",&num);
while(num!= -1)
{
newnode = (struct node *)malloc(sizeof(struct node)); 
newnode->data=num;
if(start == NULL)
{
newnode->next=NULL;
start=newnode;
}
else
{
ptr = start;
while(ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = newnode;
newnode->next=NULL;
}
printf("\n enter the data or -1 to end: ");
scanf("%d",&num);
}
return start;
}
void display(struct node* start) 
{
struct node * ptr; 
ptr=start;
while (ptr != NULL)
{
printf("%d\t ", ptr->data);
ptr=ptr->next;
}
}
struct node * insert_beg(struct node * start) 
{
struct node * newnode; 
int num;
printf("\n enter the data: "); 
scanf("%d",&num);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=start;
start=newnode;
return start;
}
struct node* insert_end(struct node * start) 
{
int num;
printf("\n enter the data: "); 
scanf("%d",&num);
struct node* new_node, *ptr;
new_node= (struct node*)malloc(sizeof(struct node));
new_node->data=num;
new_node-> next= NULL; 
ptr=start;
while(ptr->next!=NULL)
ptr= ptr->next;
ptr->next=new_node;
return start;
}
struct node* insert_after(struct node * start) 
{
int num, val;
printf("\n enter the data: "); 
scanf("%d",&num);
printf("\n enter a value after which the new node is inserted: "); 
scanf("%d",&val);
struct node* new_node, *ptr, *preptr;
new_node= (struct node*)malloc(sizeof(struct node)); 
new_node->data=num;
ptr=start;
preptr=ptr;
while(preptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=new_node;
new_node->next=ptr;
return start;
}
struct node* insert_before(struct node * start) 
{
int num, val;
printf("\n enter the data: "); 
scanf("%d",&num);
printf("\n enter a value after which the new node is inserted: "); 
scanf("%d",&val);
struct node* new_node, *ptr, *preptr;
new_node= (struct node*)malloc(sizeof(struct node)); 
new_node->data=num;
ptr=start;
preptr=ptr;
while(ptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=new_node;
new_node->next=ptr;
return start;
}
struct node * delete_beg(struct node * start) 
{
struct node * ptr; 
ptr=start;
start=start->next;
free(ptr);
return start;
}
struct node *delete_end(struct node *start)
{
struct node *ptr, *preptr; 
ptr = start;
while(ptr -> next != NULL) 
{
preptr = ptr;
ptr = ptr -> next; 
}
preptr -> next = NULL; 
free(ptr);
return start;
}
struct node *delete_after(struct node *start) 
{
struct node *ptr, *preptr; 
int val;
printf("\n Enter the value after which the node has to deleted : "); 
scanf("%d", &val);
ptr = start; 
preptr = start;
if(preptr->data == val) 
ptr=ptr->next;
while(preptr-> data != val)
{
preptr = ptr;
ptr = ptr -> next; 
 
}
preptr -> next=ptr -> next; 
free(ptr);
return start;
}
