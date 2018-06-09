#include <stdio.h>

int main()
{
	int num1 = 12;	//전위 증가 연산자를 보기위한 변수 선언
	int num2 = 12;	//후위 증가 연산자를 보기위한 변수 선언

	printf("num1: %d \n", num1);
	printf("num++: %d \n", num1++);
	printf("num1: %d\n", num1);

	printf("num2: %d\n", num2);
	printf("++num2: %d\n", ++num2);
	printf("num2: %d\n", num2);
	
	return 0;
}