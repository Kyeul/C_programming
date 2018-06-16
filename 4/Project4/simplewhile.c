/*
while 반복문 첫 연습
박결
4월 12일
*/

#include <stdio.h>	//헤더파일을 불러온다.
int main()
{
	int num = 0;	//정수형 변수 선언과 0으로 초기화

	while (num < 5)	//반복문의 조건은 num<5	 -> 5회 반복
	{
		printf("Hello world! %d \n", num);	//출력
		num++;	//num값을 1씩 증가시킨다.
	}
	return 0;
}