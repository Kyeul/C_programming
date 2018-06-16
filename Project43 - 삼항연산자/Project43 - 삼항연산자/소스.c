#include<stdio.h>

int main() {
	int num, abs;	//정수를 입력받을 변수 num과 절대값을 저장할 변수 abs 선언

	printf("정수 입력:");
	scanf("%d", &num);	//num의 주소값을 호출해서 그곳에 정수 값을 저장한다.

	abs = (num > 0) ? num : num * (-1);	//abs에 삼항연산자를 대입. num이 양수면 num을 출력하고 음수면 -1을 곱한다.
	printf("절대값: %d \n", abs);

	return 0;
}