#include <stdio.h>

int main(void)
{
	char str[50];
	int len=0, i, temp;

	printf("�Է�: ");
	scanf("%s", str);

	for (i = 0; str[i] != 0; i++)
		len++;
	printf("���̴� %d\n",len);
	temp = len - 1;

	for (i = 0; i <= (len / 2); i++)
	{
		if (str[i] == str[temp - i])
			continue;
		else
		{
			printf("%s�� ȸ���� �ƴմϴ�.\n",str);
			return 0;
		}
	}
	printf("%s�� ȸ���Դϴ�\n", str);

	return 0;
}