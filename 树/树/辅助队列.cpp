#include "function.h"

void InitQueue(LinkQueue& Q) {
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	if (Q.front) Q.front->next = NULL;
}

bool isEmpty(LinkQueue Q) {
	return Q.front->next == NULL;
}

bool EnQueue(LinkQueue& Q, Elemtype x) {
	LinkNode* pnew = (LinkNode*)malloc(sizeof(LinkNode));
	if (pnew) {
		pnew->data = x;
		pnew->next = NULL;
		Q.rear->next = pnew;
		Q.rear = pnew;
	}
	return true;
}

bool DeQueue(LinkQueue& Q, Elemtype& x) {
	if (isEmpty(Q)) {
		return false;
	}
	LinkNode* q = Q.front->next;
	x = q->data;
	Q.front->next = q->next;
	if (q == Q.rear) {
		Q.rear = Q.front;
	}
	free(q);
	return true;
}