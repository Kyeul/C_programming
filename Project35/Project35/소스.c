#include<stdio.h>

int main() {
	char x;	//�Է�Ű x����

	printf("A, a�� 1�̰� B, b�� 2�̴�.");
	scanf("%c", &x);

	switch (x) {
	case 'A':
	case 'a':
		printf("1\n");
		break;	
	case 'B':
	case 'b':
		printf("2\n");
		break;
	default:
		printf("�߸��� ���̳�\n");

	}
}