#include "function.h"

//前序遍历，先序遍历，深度优先遍历
void PreOrder(Tree T) {
	if (T) {
		printf("%c", T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//中序遍历
void InOrder(Tree T) {
	if (T) {
		InOrder(T->lchild);
		printf("%c", T->data);
		InOrder(T->rchild);
	}
}
//后序遍历
void PostOrder(Tree T) {
	if (T) {
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		printf("%c", T->data);
	}
}