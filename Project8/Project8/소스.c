#include <stdio.h>
int main()
{
	int num;	//�Է¹��� ����
	int i = 0;	//while���� �۵���ų ����
	int sum = 0;	//���� ������ ����

	while (i < 5)
	{
		printf("���� �ڿ����� ��������.");
		scanf("%d", &num);
		while (num <= 0)
		{	
			num = 0;
			printf("�ڿ����� �ٽ� �Է��ϼ���");
			scanf("%d", &num);
		}
		sum += num;
		++i;
	}

	printf("������: %d", sum);
	return 0;
}