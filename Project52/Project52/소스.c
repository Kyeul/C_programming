#include<stdio.h>

int GetAbsoValue(int num);

int main(void)
{
	int num1;	//�Է� ����
	printf("���� �Է�: ");	//�ȳ��� ���
	scanf("%d", &num1);	//�Է�
	printf("%d�� ����: %d \n", num1, GetAbsoValue(num1));
	return 0;
}

int GetAbsoValue(int num)
{
	return num > 0 ? num : num * (-1);
}