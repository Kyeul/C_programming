#include <stdio.h>
int main()
{
	int num1, num2;	//�Է¹��� ����
	int sum=0;	//���� ������ ����
	printf("�� ������ �Է��Ͻÿ�.");
	scanf("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)	//�ݺ��� num1�� num2���� ũ�� ����, num1�� 1�� ������Ų��.
	{
		sum += num1;	//sum�� num1�� ��� �����Ѵ�.
	}
	printf("������ %d�̴�.\n", sum);
	return 0;
}