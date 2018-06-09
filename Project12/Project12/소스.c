#include <stdio.h>
int main()
{
	int num;	//횟수를 입력받을 변수 선언
	int i = 1;	//곱셈식을 실행하고 반복문을 실행할 변수 선언

	scanf("%d", &num);
	for (; i <= num; i++)
		printf("3 X %d = %d \n", i, 3 * i);
	
	return 0;
} 