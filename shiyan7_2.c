//#include<stdio.h>
//#include<stdlib.h>
//
//#define  MAXLEN  128
//
//typedef  struct
//{
//	char  data;
//	int  lchild;
//	int  rchild;
//}  StaticLinkNode;
//
//typedef  struct
//{
//	StaticLinkNode  List[MAXLEN];
//	int  root;
//}  StaticLinkList;
//
//typedef  struct  bt
//{
//	char  data;
//	struct  bt* lchild;
//	struct  bt* rchild;
//}  BT;
//
//BT* StaticLinkList2BT(StaticLinkList* SLL, int  i)
//{
//	if (i != -1)
//	{
//		BT* T;
//		T = (BT*)malloc(sizeof(BT));
//		T->data = SLL->List[i].data;
//		T->lchild = StaticLinkList2BT(SLL, SLL->List[i].lchild);
//		T->rchild = StaticLinkList2BT(SLL, SLL->List[i].rchild);
//		return  T;
//	}
//	return  NULL;
//}
//
//
///**/
//char  max_element(BT* root)//�������Ϊһ�Ŷ������ĸ���㣬�������������Ǹ�Ԫ�أ���Ϊ�շ���'\0'
//{
//	static char max = 0; //��static ȫ�־�̬�����������Ļ�ÿ�εݹ����maxֵ����ı�
//	if (root != NULL) {   //�����ط��ڵ���ʱstaticҲ�����ŵ��øı�
//		if (root->data >= max)  
//			max = root->data;
//		max_element(root->lchild);  //���������static,�ݹ�ʱmaxֵ�����±�Ϊ0
//		max_element(root->rchild);
//	}
//	else return 0;
//	return max;
//}
///**/
//
//int  main(void)
//{
//	int  N = 0, i = 0;
//	StaticLinkList  SLL;
//	BT* T;
//	char  ch;
//	scanf("%d%d", &N, &SLL.root);
//	for (i = 0; i < N; i++)
//	{
//		getchar();
//		scanf("%c%d%d", &SLL.List[i].data, &SLL.List[i].lchild, &SLL.List[i].rchild);
//	}
//	T = StaticLinkList2BT(&SLL, SLL.root);//���Ծ�̬����洢������ת��Ϊ��������
//	ch = max_element(T);
//	if (ch != '\0')
//	{
//		printf("%c\n", ch);
//	}
//	else
//	{
//		printf("Binary  trees  are  empty!\n");
//	}
//	return  0;
//}
//
//
//
