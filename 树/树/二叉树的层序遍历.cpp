#include "function.h"
//��α��������������������ȱ���
void LevelOrder(Tree T) {
	LinkQueue Q;
	InitQueue(Q);
	Tree p;//�洢���ӵĽ��
	EnQueue(Q, T);
	while (!isEmpty(Q)) {
		DeQueue(Q, p);
		putchar(p->data);
		if (p->lchild)
			EnQueue(Q, p->lchild);
		if (p->rchild)
			EnQueue(Q, p->rchild);
	}
}