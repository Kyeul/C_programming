#include <stdio.h>

int main()
{
	int num =1;	//입력 받을 변수
	int sum = 0;	// 합을 저장할 변수

	while (num != 0)
	{	
		printf("합할 수를 입력하시오\n");
		scanf("%d", &num);
		sum += num;
	}

	printf("총 합은: %d\n", sum);
	return 0;
}