#include "function.h"
//Î´Íê³É
void buildTree_2(Tree &T) {
	Tree Tpnew;
	LinkQueue Q;
	LinkNode* p=NULL;
	ElemType c;
	InitQueue(Q);
	for (;;) {
		scanf("%c", &c);
		if (c == '\n')
			break;
		Tpnew = (Tree)calloc(1, sizeof(TreeNode));
		if (Tpnew) 
			Tpnew->data = c;
		EnQueue(Q, Tpnew);
		if (NULL == T) {
			T = Tpnew;
			p->data = Tpnew;
		}
		else if (NULL == p->data->lchild) {
			p->data->lchild = Tpnew;
		}
		else if (NULL == p->data->rchild) {
			p->data->rchild = Tpnew;
		}
	}
}