#include <stdio.h>
int main()
{
	int num;
	int multip = 1;

	printf("n! 계산기. n값을 입력하세요.");
	scanf("%d", &num);

	for (; num >= 1; --num)
	{
		multip *= num;	
	}
	
	printf("값은: %d \n", multip);
	return 0;
}