#include <stdio.h>
int main()
{
	int num, num2, result = 0;

	for (num = 1; result <= 20000;)
	{
		printf("%d��°",num);
		num2 = num * num;
		num++;
		result += num2;
		printf("<<%d>>", result);
		printf("   <%d>\n", num);
		
	}
	printf("1 �������� n�������� �տ��� 10000�� �Ѵ� ù��° n�� %d�̴�.\n", num-1);
	return 0;
}