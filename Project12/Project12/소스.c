#include <stdio.h>
int main()
{
	int num;	//Ƚ���� �Է¹��� ���� ����
	int i = 1;	//�������� �����ϰ� �ݺ����� ������ ���� ����

	scanf("%d", &num);
	for (; i <= num; i++)
		printf("3 X %d = %d \n", i, 3 * i);
	
	return 0;
} 