#define _CRT_SECURE_NO_WARNINGS 1

#include"BTree.h"

int main()
{
	BTNode *cur = BinaryTreeCreate("ABD##E#H##CF##G##");
	int num = 0;
	BinaryTreePrevOrder(cur);//�ݹ�ʽ��ǰ�����
	putchar('\n');
	BinaryTreeInOrder(cur);//�ݹ�ʽ���������
	putchar('\n');
	BinaryTreePostOrder(cur);//�ݹ�ʽ�ĺ������
	putchar('\n');
	BinaryTreeLevelOrder(cur);//�������
	putchar('\n');
	BinaryTreePrevOrderNonR(cur);//�ǵݹ�ʽ��ǰ�����
	putchar('\n');
	BinaryTreeInOrderNonR(cur);//�ǵݹ�ʽ���������
	putchar('\n');
	BinaryTreePostOrderNonR(cur);//�ǵݹ�ʽ�ĺ������
	putchar('\n');
	scanf("%d", &num);
	BIaryTreeLevelPrint(cur, num);
	putchar('\n');

	return 0;
}
