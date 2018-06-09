#include <stdio.h>
int main()
{
	int num, i, inp, sum;
	double result;

	i = 0, sum = 0;
	printf("몇 개의 정수를 더할까요?");
	scanf("%d", &num);
	printf("%d 개의 정수를 입력하시오.\n", num);
	while (i < num)
	{
		
		scanf("%d", &inp);
		sum += inp;
		i++;
	}
	result = sum / num;
	printf("평균은 %.3lf \n", result);
	return 0;
}