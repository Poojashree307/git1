#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node *right;
} NODE;
NODE * createnewNode(int gd)
{
	NODE*newNode;
	newNode=(NODE*)malloc(sizeof(NODE));
	newNode->data=gd;
	newNode->left=newNode->right=NULL;
	return newNode;
}
void inordertraversal(NODE*curr)
{
	if(curr==NULL)return ;
	inordertraversal(curr->left);
	printf("%d",curr->data);
	inordertraversal(curr->right);
	
}
void preordertraversal(NODE*curr)
{
	if(curr==NULL)return ;
	printf("%d",curr->data);
	preordertraversal(curr->left);
	preordertraversal(curr->right);
}
void postordertraversal(NODE*curr)
{
	if(curr==NULL)return ;
	postordertraversal(curr->left);
	postordertraversal(curr->right);
	printf("%d",curr->data);
}
int main()
{
	NODE*root=NULL;
	root=createnewNode(1);
	root->left=createnewNode(2);
	root->right=createnewNode(3);
	root->left->left=createnewNode(4);
	root->left->right=createnewNode(5);
	root->right->left=createnewNode(6);
	root->right->right=createnewNode(7);
	root->left->left->right=createnewNode(8);
	root->right->right->right=createnewNode(9);
	printf("Inorder:\n");
	inordertraversal(root);
	printf("\npreorder:\n");
	preordertraversal(root);
	printf("\npostorder:\n");
	postordertraversal(root);
	
}
