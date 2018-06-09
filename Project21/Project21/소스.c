#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;
	while (1) {
		++num;
		sum += num;
		
		
		if (sum + num > 10000)
			break;

	}

	printf("sum:%d\n", sum);
	printf("num:%d\n", num);
	return 0;
}