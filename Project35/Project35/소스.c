#include<stdio.h>

int main() {
	char x;	//입력키 x선언

	printf("A, a는 1이고 B, b는 2이다.");
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
		printf("잘못된 값이네\n");

	}
}