#include <stdio.h>

int main()
{
	int num =1;	//�Է� ���� ����
	int sum = 0;	// ���� ������ ����

	while (num != 0)
	{	
		printf("���� ���� �Է��Ͻÿ�\n");
		scanf("%d", &num);
		sum += num;
	}

	printf("�� ����: %d\n", sum);
	return 0;
}