#include "function.h"

void buildTree(Tree& T){
	Tree Tpnew; //����һ��ָ�������½���ָ��
	ElemType c; //����һ����ʱ�������ݵı���
	ptag phead = NULL, ptail = NULL, Lpnew = NULL, pcur = NULL;//���帨������
	while (true) 
	{
		scanf("%c",&c);
		if (c == '\n') 
			break; //�������о��˳�
		Tpnew = (Tree)calloc(1, sizeof(TreeNode));//����һ�������ռ�
		if (Tpnew) 
			Tpnew->data = c;//���������ݴ��������
		Lpnew = (ptag)calloc(1, sizeof(tag));//����һ�����н��ռ�
		if (Lpnew) 
			Lpnew->p = Tpnew;//�������ĵ�ֵַ��ָ��ý���ָ�룩�������
		
		if (T==NULL) //�������ʱΪ���������½��Ϊ���ĸ�
		{
			T = Tpnew;  //ʹTָ���
			phead = Lpnew; //����ͷָ��ָ��ý��ָ��
			ptail = Lpnew; //����βָ��ָ��ý��ָ��
			pcur = Lpnew;  //pcurָ����һ���������Ľ�����Ҫ����Ľ��ָ��
		}
		else {
			if(ptail) ptail->pnext = Lpnew; //ʹ�½��ָ���������
			ptail = Lpnew; //βָ��ָ���½��ָ��
			if (pcur) {
				if (pcur->p->lchild == NULL) //�жϽ���Ƿ�������
				{
					pcur->p->lchild = Tpnew; //ʹ�½���Ϊ������
				}
				else if (pcur->p->rchild == NULL)//�жϽ���Ƿ����Һ���
				{
					pcur->p->rchild = Tpnew; //ʹ�½���Ϊ���Һ���
					pcur = pcur->pnext;
				}
			}
		}
	}
}