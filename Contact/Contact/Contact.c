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
		printf("ͨѶ�������޷����\n");
		return;
	}
	printf("���������֣�>");
	scanf_s("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf_s("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
 	scanf_s("%s", pc->data[pc->sz]. sex);
	printf("������绰:>");
	scanf_s("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
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