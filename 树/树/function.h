#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;

typedef struct TreeNode {
	ElemType data;
	TreeNode* lchild;
	TreeNode* rchild;
}TreeNode,*Tree;

typedef Tree Elemtype;
typedef struct LinkNode {
	Elemtype data;
	LinkNode* next;
}LinkNode;
typedef struct {
	LinkNode* front, * rear;
}LinkQueue;

void InitQueue(LinkQueue& Q);
bool isEmpty(LinkQueue Q);
bool EnQueue(LinkQueue& Q, Elemtype x);
bool DeQueue(LinkQueue& Q, Elemtype& x);

typedef struct tag {
	Tree p;
	tag* pnext;
}tag,*ptag;

void buildTree(Tree& T);

void PreOrder(Tree T);
void InOrder(Tree T); 
void PostOrder(Tree T);
void LevelOrder(Tree T);

int wpl_PreOrder(Tree T, int deep);
int WPL(Tree T);

void buildTree_2(Tree& T);
