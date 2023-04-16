#include "function.h"
//层次遍历，层序遍历，广度优先遍历
void LevelOrder(Tree T) {
	LinkQueue Q;
	InitQueue(Q);
	Tree p;//存储出队的结点
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