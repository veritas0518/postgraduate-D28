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
//char  max_element(BT* root)//输入参数为一颗二叉树的根结点，返回树中最大的那个元素，树为空返回'\0'
//{
//	static char max = 0; //用static 全局静态变量，这样的话每次递归调用max值都会改变
//	if (root != NULL) {   //其他地方在调用时static也会随着调用改变
//		if (root->data >= max)  
//			max = root->data;
//		max_element(root->lchild);  //如果不加入static,递归时max值会重新变为0
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
//	T = StaticLinkList2BT(&SLL, SLL.root);//将以静态链表存储的链表转化为二叉链表
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
