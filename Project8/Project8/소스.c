#include <stdio.h>
int main()
{
	int num;	//입력받을 변수
	int i = 0;	//while문을 작동시킬 변수
	int sum = 0;	//합을 저장할 변수

	while (i < 5)
	{
		printf("합할 자연수를 적으세요.");
		scanf("%d", &num);
		while (num <= 0)
		{	
			num = 0;
			printf("자연수로 다시 입력하세요");
			scanf("%d", &num);
		}
		sum += num;
		++i;
	}

	printf("총합은: %d", sum);
	return 0;
}