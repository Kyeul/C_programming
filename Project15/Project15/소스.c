#include <stdio.h>
int main()
{
	int num, num2, result = 0;

	for (num = 1; result <= 20000;)
	{
		printf("%d번째",num);
		num2 = num * num;
		num++;
		result += num2;
		printf("<<%d>>", result);
		printf("   <%d>\n", num);
		
	}
	printf("1 제곱부터 n제곱까지 합에서 10000을 넘는 첫번째 n은 %d이다.\n", num-1);
	return 0;
}