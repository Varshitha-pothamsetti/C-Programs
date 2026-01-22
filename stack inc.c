#include<stdio.h>
#define max_size 100
int stack[max_size];
int top=-1;
void push(int num){
	if(top==max_size-1){
		printf("stack overload\n");
		return;
	}
	stack[++top]=num;
}
int pop(){
	if(top==-1 ){
		printf("stack underflow");
		return -1;
	}
	return stack[top--];
}
int main(){
	push(10);
	push(20); 
	push(30);
	printf("pop num:%d\n",pop());
	printf("pop num:%d\n",pop());
	printf("pop num:%d\n",pop());
	return 0;
}
