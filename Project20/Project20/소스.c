#include <stdio.h>

int main(void)
{
	char num1;
	int num2;
	printf("알파벳 입력:");
	scanf("%c", &num1);
	printf("개수:");
	scanf("%d", &num2);
	while (num2 > 0)
	{
		printf("%d", num1);
		num1++;
		num2--;
	}
	return 0;
}