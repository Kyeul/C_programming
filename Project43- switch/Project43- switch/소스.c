#include<stdio.h>

int main() {
	int num;	//switch 문을 돌릴 변수

	scanf("%d", &num);

	switch (num)
	{
	case 1: case 2:
		printf("1, 2\n");
		break;
	case 3: case 4:
		printf("3, 4\n");
		break;
	default:
		printf("Hello world!\n");
	}
}