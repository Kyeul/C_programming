#include <stdio.h>
#include "header.h"

int main()
{
	int i;	//�ݺ����� ������ ����
	struct employee member[3];

	for (i = 0; i < 3; i++)
	{
		printf("������ �Է�");
		scanf("%s", member[i].name);
		printf("��ȭ��ȣ �Է�");
		scanf("%s", member[i].phonenum);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s�� ��ȣ�� %s�Դϴ�. \n", member[i].name, member[i].phonenum);

	}
	return 0;
}