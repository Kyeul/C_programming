#include<stdio.h>

int main() {
	int num, abs;	//������ �Է¹��� ���� num�� ���밪�� ������ ���� abs ����

	printf("���� �Է�:");
	scanf("%d", &num);	//num�� �ּҰ��� ȣ���ؼ� �װ��� ���� ���� �����Ѵ�.

	abs = (num > 0) ? num : num * (-1);	//abs�� ���׿����ڸ� ����. num�� ����� num�� ����ϰ� ������ -1�� ���Ѵ�.
	printf("���밪: %d \n", abs);

	return 0;
}