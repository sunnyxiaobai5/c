#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef char ElemType;

typedef struct BiTreeNode
{
	ElemType Data;
	struct BiTreeNode *Lchild,*Rchild;
}BiTreeNode;

//初始化二叉树
int InitBiTree(BiTreeNode *&T)
{
	if(!(T=(BiTreeNode *)malloc(sizeof(BiTreeNode))))
		return 0;
	else
	{
		T->Lchild=NULL;
		T->Rchild=NULL;
	}
	return 1;
}

//先序建立二叉树
void CreateBiTree(BiTreeNode *&T)
{
	ElemType e;
	scanf("%c",&e);
	if(e=='#')
	{
		T=NULL;
	}
	else
	{
		T=(BiTreeNode *)malloc(sizeof(BiTreeNode));
		T->Data=e;
		CreateBiTree(T->Lchild);
		CreateBiTree(T->Rchild);
	}
	return;
}

//先序遍历二叉树
void PreOrderTraverse(BiTreeNode *T)
{
	if(T==NULL)
		return;
	printf("%c",T->Data);
	PreOrderTraverse(T->Lchild);
	PreOrderTraverse(T->Rchild);
}

//中序遍历二叉树
void InOrderTraverse(BiTreeNode *T)
{
	if(T==NULL)
		return;
	InOrderTraverse(T->Lchild);
	printf("%c",T->Data);
	InOrderTraverse(T->Rchild);
}

//后序遍历二叉树
void PostOrderTraverse(BiTreeNode *T)
{
	if(T==NULL)
		return;
	PostOrderTraverse(T->Lchild);
	PostOrderTraverse(T->Rchild);
	printf("%c",T->Data);
}

//层序遍历二叉树
void LevelOrderTraverse(BiTreeNode *T)
{
	if(T==NULL)
		return;
	if(T->Lchild==NULL)
		return;
	if(T->Rchild==NULL)
		return;
	printf("%c",T->Data);
	printf("%c",T->Lchild->Data);
	printf("%c",T->Rchild->Data);
	LevelOrderTraverse(T->Lchild);
	LevelOrderTraverse(T->Rchild);
}

int main()
{
	BiTreeNode *Root;
	CreateBiTree(Root);
	printf("先序遍历:");
	PreOrderTraverse(Root);
	printf("\n中序遍历:");
	InOrderTraverse(Root);
	printf("\n后序遍历:");
	PostOrderTraverse(Root);
	printf("\n层序遍历:");
	LevelOrderTraverse(Root);
	printf("\n");
	return 0;
}
