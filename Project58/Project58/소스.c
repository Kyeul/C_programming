#include<stdio.h>
#include<string.h>

int main() {
	char word[20];
	char reverse[20];
	int len;	//���ڿ� ���̸� ������ ����
	int i = 0;
	scanf("%s", word);

	len = strlen(word);

	printf("%d\n", len);

	for (; len < 0; len--)
	{
		reverse[len] = word[i];
		i++;
	}
	
	printf("%s\n", reverse); //�ϴ� ���� �ߵ�
	for (i = 0; i < 20; i++)
		printf("%s\n", reverse[i]);

	len = strlen(word);
	i = 0;


	for (; len < 0; len--)
	{
		if (word[i] != reverse[i])
		{
			printf("%s�� ȸ���� �ƴմϴ�.",word);
			return 0;
		}
	}

	printf("%s�� ȸ���Դϴ�.", word);
	return 0;


}