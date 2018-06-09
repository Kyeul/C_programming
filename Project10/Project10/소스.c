#include <stdio.h>
int main()
{
	int num = 2, inc = 1;	//구구단을 표현할 num과 곱하는 수의 inc 변수

	while (num < 10)	//num이 10을 넘으면 종료
	{
		printf("\n%d 단 \n", num);
		while (inc < 10)	//inc가 10을 넘으면 종료
		{
			printf("%d X %d = %d \n", num, inc, num*inc);
			inc++;
		}
		inc = 1;
		num++;
	}
	return 0;
}