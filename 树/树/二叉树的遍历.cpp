#include "function.h"

//ǰ����������������������ȱ���
void PreOrder(Tree T) {
	if (T) {
		printf("%c", T->data);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//�������
void InOrder(Tree T) {
	if (T) {
		InOrder(T->lchild);
		printf("%c", T->data);
		InOrder(T->rchild);
	}
}
//�������
void PostOrder(Tree T) {
	if (T) {
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		printf("%c", T->data);
	}
}