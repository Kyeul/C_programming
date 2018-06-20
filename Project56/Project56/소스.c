#include<stdio.h>

int is_leap(int num)
{
	if ((num % 4) == 0)
	{
		if ((num % 400) == 0)
			return 1;
		else if ((num % 100) == 0)
			return 0;
	}
	else
		return 0;
}

int main()
{
	int year;
	int w;
	printf("������ �Է��ϼ���:");
	scanf("%d", &year);

	w = is_leap(year);

	if (w == 1)
	{
		printf("%d���� �����̰�, 366���Դϴ�.\n", year);
	}
	else
		printf("%d���� ������ �ƴϰ�, 365���Դϴ�.\n", year);
	return 0;
}