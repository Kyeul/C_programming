#include <stdio.h>
int main()
{
	int num = 1;	//�Է¹��� ���� ����� �ʱ�ȭ
	int sum = 0;	//���� ������ ���� ����� �ʱ�ȭ

	for (; num != 0;)
	{
		scanf("%d", &num);	//���� �Է�
		sum += num;	//���� ����
	}
	printf("������ %d�̴�. \n", sum);
	return 0;
}