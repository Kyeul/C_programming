#include<stdio.h>

int fact(int num)
{
	int result = 1;	// ��갪�� ������ ����

	while (1)
	{
		result = result * num;	//���丮�� ���
		num--; // num ����
		if (num == 1)
			break;
	}
	return result;
}

int main() 
{
	int num;	//�Է¹��� ����

	while (1)
	{
		printf("���� ������ �Է��ϼ���:");	//�ȳ��� ���
		scanf("%d", &num);

		if (num <= 0)
		{
			printf("%d�� ���� ������ �ƴմϴ�.\n", num);
			continue;
		}
		else
		{
			printf("%d�� ���丮��: %d\n", num, fact(num));
			break;
		}
	}
	return 0;

}