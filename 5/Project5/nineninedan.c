/*
구구단을 실행하는 프로그램 작성
박결
4월 12일
*/

#include <stdio.h>
int main()
{
	int dan = 0, num = 1;	//인트형 변수 선언과 0으로 초기화	
	printf("몇 단? ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf(" %d x %d = %d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}