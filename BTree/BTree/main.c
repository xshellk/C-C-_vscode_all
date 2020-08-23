#define _CRT_SECURE_NO_WARNINGS 1

#include"BTree.h"

int main()
{
	BTNode *cur = BinaryTreeCreate("ABD##E#H##CF##G##");
	int num = 0;
	BinaryTreePrevOrder(cur);//递归式的前序遍历
	putchar('\n');
	BinaryTreeInOrder(cur);//递归式的中序遍历
	putchar('\n');
	BinaryTreePostOrder(cur);//递归式的后序遍历
	putchar('\n');
	BinaryTreeLevelOrder(cur);//层序遍历
	putchar('\n');
	BinaryTreePrevOrderNonR(cur);//非递归式的前序遍历
	putchar('\n');
	BinaryTreeInOrderNonR(cur);//非递归式的中序遍历
	putchar('\n');
	BinaryTreePostOrderNonR(cur);//非递归式的后序遍历
	putchar('\n');
	scanf("%d", &num);
	BIaryTreeLevelPrint(cur, num);
	putchar('\n');

	return 0;
}
