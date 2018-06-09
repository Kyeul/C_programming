#include <stdio.h>
int main()
{
	int num = 1;	//입력받을 변수 선언과 초기화
	int sum = 0;	//합을 저장할 변수 선언과 초기화

	for (; num != 0;)
	{
		scanf("%d", &num);	//숫자 입력
		sum += num;	//합을 저장
	}
	printf("총합은 %d이다. \n", sum);
	return 0;
}