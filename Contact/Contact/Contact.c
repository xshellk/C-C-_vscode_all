#include"Contact.h"
void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data)); 
}
void AddContact(pContact pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯已满，无法添加\n");
		return;
	}
	printf("请输入名字：>");
	scanf_s("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf_s("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
 	scanf_s("%s", pc->data[pc->sz]. sex);
	printf("请输入电话:>");
	scanf_s("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf_s("%s", pc->data[pc->sz].addr);

	pc->sz++;
}
void ShowContact(pContact pc)
{
	assert(pc);
	int i = 0;
	printf("%10s\t%4s\t%s5s\t%12s\t%20s\n", "name", "age", "sex", "tele", "addr"); 
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s\t%4s\t%s5s\t%12s\t%20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}