#include<stdio.h>

int prime(int num)
{
	int count = 0;	//for �ݺ��� Ȱ�� ����
	int i;
	for (i = 1; i <= num; i++)
	{
		if (count > 2)
			break;
		if ((num%i)==0)
		{
			count++;
		}
	}
	if (count == 2)
		return 0;
	else
		return 1;
}

int main(void)
{
	int i;	//�ݺ��� ����
	int number[] = { 4,9,31,5 };

	for (i = 0; i < 4; i++)
	{
		if (prime(number[i]) == 1)
			printf("%d ��° �� %d�� �Ҽ��Դϴ�.\n", i + 1, number[i]);
		else if (prime(number[i]) == 0)
			printf("%d ��° �� %d�� �Ҽ��� �ƴմϴ�.\n", i + 1, number[i]);
	}
	return 0;
}