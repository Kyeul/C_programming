#include <stdio.h>

int main(void)
{
	char str[50];
	int len=0, i, temp;

	printf("입력: ");
	scanf("%s", str);

	for (i = 0; str[i] != 0; i++)
		len++;
	printf("길이는 %d\n",len);
	temp = len - 1;

	for (i = 0; i <= (len / 2); i++)
	{
		if (str[i] == str[temp - i])
			continue;
		else
		{
			printf("%s는 회문이 아닙니다.\n",str);
			return 0;
		}
	}
	printf("%s는 회문입니다\n", str);

	return 0;
}