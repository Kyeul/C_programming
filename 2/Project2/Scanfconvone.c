/*
scanf�Լ��� �̿��Ͽ� 10����, 8����, 16���� �Է¹ް� ����ϱ�
�ڰ�
4�� 12��
*/

#include <stdio.h>
int main()
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ���: ");
	printf("%d %d %d \n	", num1, num2, num3);
	return 0;
}