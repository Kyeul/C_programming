#include<stdio.h>

int GetAbsoValue(int num);

int main(void)
{
	int num1;	//입력 변수
	printf("정수 입력: ");	//안내문 출력
	scanf("%d", &num1);	//입력
	printf("%d의 절댓값: %d \n", num1, GetAbsoValue(num1));
	return 0;
}

int GetAbsoValue(int num)
{
	return num > 0 ? num : num * (-1);
}