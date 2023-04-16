#include "function.h"

int main() {
	Tree T = NULL; //T是指向树根的，代表树  //目前是空树
	buildTree(T);
	int wpl=0;
	printf("\n--------PreOrder------\n");
	PreOrder(T);
	printf("\n--------InOrder-------\n");
	InOrder(T);
	printf("\n-------PostOrder------\n");
	PostOrder(T);
	printf("\n-------LevelOrder------\n");
	LevelOrder(T);
	wpl=WPL(T);
	printf("%d", wpl);
	return 0;
}