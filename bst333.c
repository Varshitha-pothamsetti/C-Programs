#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
	int Data;
	struct TreeNode *Left;
	struct TreeNode *Right;
};
int GetMin(struct TreeNode* Root)
{
	struct TreeNode* Temp = Root;
	while(Temp->Left != NULL)
	{
		Temp=Temp->Left;
	}
	return Temp->Data;
}
struct TreeNode* Delete(struct TreeNode* Root,int key)
{
	if(Root == NULL) return NULL;
	else if( Root->Data < key){
		Root->Right = Delete(Root->Right,key);
	}
	else if( Root->Data > key){
		Root->Left = Delete(Root->Left,key);
	}
	else{
		if(Root->Left == NULL && Root->Right == NULL){
			free(Root);
			return NULL;
		}		
		else if(Root->Left == NULL)
		{
			struct TreeNode* temp = Root;
			free(Root);
			return temp->Right;
		}
		else if(Root->Right == NULL){
			struct TreeNode* temp = Root;
			free(Root);
			return temp->Left;
		}
		else
		{
			int Value = GetMin(Root->Right);
			Root->Data = Value;
			Root->Right=Delete(Root->Right,Value);
		}
	}
	return Root;
}

struct TreeNode* Insert(struct TreeNode* Root,int Key)
{
	if(Root == NULL)
	{
		struct TreeNode* NewNode = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
		NewNode->Data = Key;
		NewNode->Left = NULL;
		NewNode->Right = NULL;	
		return NewNode;	
	}
	if(Root->Data < Key)
	{
		Root->Right = Insert(Root->Right,Key);
	}
	else{
		Root->Left = Insert(Root->Left,Key);
	}
	return Root;
}
void Display(struct TreeNode* Root)
{
	if(Root == NULL) return;
	
	Display(Root->Left);
	printf("%d ",Root->Data);
	Display(Root->Right);
}
void Search(struct TreeNode* Root,int Key)
{
	if(Root==NULL)
	{
		printf("No Key Found");
		return;
	}
	if(Root->Data == Key)
	{
		printf("Key found");
		return;
	}
	if(Root->Data < Key) Search(Root->Right,Key);
	else Search(Root->Left,Key);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	struct TreeNode* Root = (struct TreeNode*)malloc(sizeof(struct TreeNode*));
	Root->Data = arr[0];
	Root->Left = NULL;
	Root->Right = NULL;
	for(i=1;i<n;i++)
	{
		Insert(Root,arr[i]);
	}
	
	int key;
	printf("enter value to delete");
	scanf("%d",&key);
	//searching
	Root = Delete(Root,key);
	//Display 
	Display(Root);

}
