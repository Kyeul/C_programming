#include<stdio.h>

int main() {
	
	int num;	//������Ű�鼭 100������ N�� M�� ����� ���� ����

	for (num = 1; num <= 100; num++) {
		/*
		if (num % 3 == 0 || num % 4 == 0) {
			printf("3 �Ǵ� 4�� ���: %d \n", num);
		}
		*/

		if (num % 3 == 0) {
			printf("3�� ���: %d\n", num);
		}
		else if(num % 4 == 0) {
			printf("4�� ���: %d\n", num);
		}
	}
	return 0;
}