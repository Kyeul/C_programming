/*
scanf함수를 이용하여 10진수, 8진수, 16진수 입력받고 출력하기
박결
4월 12일
*/

#include <stdio.h>
int main()
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n	", num1, num2, num3);
	return 0;
}