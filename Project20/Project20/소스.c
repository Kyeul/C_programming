#include <stdio.h>

int main(void)
{
	char num1;
	int num2;
	printf("���ĺ� �Է�:");
	scanf("%c", &num1);
	printf("����:");
	scanf("%d", &num2);
	while (num2 > 0)
	{
		printf("%d", num1);
		num1++;
		num2--;
	}
	return 0;
}