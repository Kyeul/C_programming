#include <stdio.h>
int main()
{
	int num, i, inp, sum;
	double result;

	i = 0, sum = 0;
	printf("�� ���� ������ ���ұ��?");
	scanf("%d", &num);
	printf("%d ���� ������ �Է��Ͻÿ�.\n", num);
	while (i < num)
	{
		
		scanf("%d", &inp);
		sum += inp;
		i++;
	}
	result = sum / num;
	printf("����� %.3lf \n", result);
	return 0;
}