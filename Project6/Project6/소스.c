#include <stdio.h>
int main()
{
	int num1, num2;	//입력받을 변수
	int sum=0;	//합을 저장할 변수
	printf("두 정수를 입력하시오.");
	scanf("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)	//반복문 num1이 num2보다 크면 종료, num1을 1씩 증가시킨다.
	{
		sum += num1;	//sum에 num1을 계속 저장한다.
	}
	printf("총합은 %d이다.\n", sum);
	return 0;
}