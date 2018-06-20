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
	printf("연도를 입력하세요:");
	scanf("%d", &year);

	w = is_leap(year);

	if (w == 1)
	{
		printf("%d년은 윤년이고, 366일입니다.\n", year);
	}
	else
		printf("%d년은 윤연이 아니고, 365일입니다.\n", year);
	return 0;
}