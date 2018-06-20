#include<stdio.h>
#include<string.h>

int main() {
	char word[20];
	char reverse[20];
	int len;	//문자열 길이를 저장할 변수
	int i = 0;
	scanf("%s", word);

	len = strlen(word);

	printf("%d\n", len);

	for (; len < 0; len--)
	{
		reverse[len] = word[i];
		i++;
	}
	
	printf("%s\n", reverse); //일단 저장 잘됨
	for (i = 0; i < 20; i++)
		printf("%s\n", reverse[i]);

	len = strlen(word);
	i = 0;


	for (; len < 0; len--)
	{
		if (word[i] != reverse[i])
		{
			printf("%s는 회문이 아닙니다.",word);
			return 0;
		}
	}

	printf("%s는 회문입니다.", word);
	return 0;


}