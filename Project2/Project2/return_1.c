#include <stdio.h>

int main()
{
	int num1 = 12;	//���� ���� �����ڸ� �������� ���� ����
	int num2 = 12;	//���� ���� �����ڸ� �������� ���� ����

	printf("num1: %d \n", num1);
	printf("num++: %d \n", num1++);
	printf("num1: %d\n", num1);

	printf("num2: %d\n", num2);
	printf("++num2: %d\n", ++num2);
	printf("num2: %d\n", num2);
	
	return 0;
}