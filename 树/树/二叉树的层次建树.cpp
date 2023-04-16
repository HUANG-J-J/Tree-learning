#include "function.h"

void buildTree(Tree& T){
	Tree Tpnew; //定义一个指向树的新结点的指针
	ElemType c; //定义一个暂时储存数据的变量
	ptag phead = NULL, ptail = NULL, Lpnew = NULL, pcur = NULL;//定义辅助队列
	while (true) 
	{
		scanf("%c",&c);
		if (c == '\n') 
			break; //读到换行就退出
		Tpnew = (Tree)calloc(1, sizeof(TreeNode));//申请一个树结点空间
		if (Tpnew) 
			Tpnew->data = c;//将输入数据存入树结点
		Lpnew = (ptag)calloc(1, sizeof(tag));//申请一个队列结点空间
		if (Lpnew) 
			Lpnew->p = Tpnew;//将树结点的地址值（指向该结点的指针）存入队列
		
		if (T==NULL) //如果树此时为空树，即新结点为树的根
		{
			T = Tpnew;  //使T指向根
			phead = Lpnew; //队列头指针指向该结点指针
			ptail = Lpnew; //队列尾指针指向该结点指针
			pcur = Lpnew;  //pcur指向下一个进入树的结点可能要插入的结点指针
		}
		else {
			if(ptail) ptail->pnext = Lpnew; //使新结点指针先入队列
			ptail = Lpnew; //尾指针指向新结点指针
			if (pcur) {
				if (pcur->p->lchild == NULL) //判断结点是否有左孩子
				{
					pcur->p->lchild = Tpnew; //使新结点成为其左孩子
				}
				else if (pcur->p->rchild == NULL)//判断结点是否有右孩子
				{
					pcur->p->rchild = Tpnew; //使新结点成为其右孩子
					pcur = pcur->pnext;
				}
			}
		}
	}
}