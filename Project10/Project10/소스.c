#include <stdio.h>
int main()
{
	int num = 2, inc = 1;	//�������� ǥ���� num�� ���ϴ� ���� inc ����

	while (num < 10)	//num�� 10�� ������ ����
	{
		printf("\n%d �� \n", num);
		while (inc < 10)	//inc�� 10�� ������ ����
		{
			printf("%d X %d = %d \n", num, inc, num*inc);
			inc++;
		}
		inc = 1;
		num++;
	}
	return 0;
}