#include "function.h"

int wpl_PreOrder(Tree T, int deep) {
	static int wpl=0;//静态局部变量，只会初始化一次
	if (T) {
		printf("%c---%d\n", T->data,deep);
		if (T->lchild ==NULL && T->rchild == NULL) {
			wpl = wpl + T->data * deep;
		}
		wpl_PreOrder(T->lchild,deep+1);
		wpl_PreOrder(T->rchild,deep+1);
	}
	return wpl;
}

int WPL(Tree T) {
	return wpl_PreOrder(T, 1);
}