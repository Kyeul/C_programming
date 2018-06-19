#include<stdio.h>

int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;	//포인터 pnum이 인트형 변수 num1을 가르킴
	(*pnum) += 30;	//포인터 pnum이 가르키는 변수 num1에 저장된 값에 30을 더한다.

	pnum = &num2;	//포인터 pnum이 인트형 변수 num2를 가르킴
	(*pnum) -= 30;	// 포인터 pnum이 가르키는 변수 num2에 저장된 값에 30을 뺀다.

	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;

}