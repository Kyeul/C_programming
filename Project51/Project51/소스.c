#include<stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;	//������ pnum�� ��Ʈ�� ���� num1�� ����Ŵ
	(*pnum) += 30;	//������ pnum�� ����Ű�� ���� num1�� ����� ���� 30�� ���Ѵ�.

	pnum = &num2;	//������ pnum�� ��Ʈ�� ���� num2�� ����Ŵ
	(*pnum) -= 30;	// ������ pnum�� ����Ű�� ���� num2�� ����� ���� 30�� ����.

	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;

}