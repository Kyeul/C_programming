#include <stdio.h>
int main()
{
	int num;
	int multip = 1;

	printf("n! ����. n���� �Է��ϼ���.");
	scanf("%d", &num);

	for (; num >= 1; --num)
	{
		multip *= num;	
	}
	
	printf("����: %d \n", multip);
	return 0;
}