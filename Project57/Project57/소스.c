#include<stdio.h>

int prime(int num)
{
	int count = 0;	//for 반복문 활용 변수
	int i;
	for (i = 1; i <= num; i++)
	{
		if (count > 2)
			break;
		if ((num%i)==0)
		{
			count++;
		}
	}
	if (count == 2)
		return 0;
	else
		return 1;
}

int main(void)
{
	int i;	//반복문 변수
	int number[] = { 4,9,31,5 };

	for (i = 0; i < 4; i++)
	{
		if (prime(number[i]) == 1)
			printf("%d 번째 값 %d는 소수입니다.\n", i + 1, number[i]);
		else if (prime(number[i]) == 0)
			printf("%d 번째 값 %d는 소수가 아닙니다.\n", i + 1, number[i]);
	}
	return 0;
}