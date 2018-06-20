#include<stdio.h>

int fact(int num)
{
	int result = 1;	// 계산값을 저장할 변수

	while (1)
	{
		result = result * num;	//팩토리얼 계산
		num--; // num 감소
		if (num == 1)
			break;
	}
	return result;
}

int main() 
{
	int num;	//입력받을 변수

	while (1)
	{
		printf("양의 정수를 입력하세요:");	//안내문 출력
		scanf("%d", &num);

		if (num <= 0)
		{
			printf("%d는 양의 정수가 아닙니다.\n", num);
			continue;
		}
		else
		{
			printf("%d의 팩토리얼: %d\n", num, fact(num));
			break;
		}
	}
	return 0;

}