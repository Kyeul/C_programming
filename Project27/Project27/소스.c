#include<stdio.h>
int main()
{
	char *text[] = { "����", "����", "����","����" };
	int i;

	printf("text�� ũ��: %d\n", sizeof(text));

	for (i = 0; (sizeof(text)/4)=0; i++) {
		printf("%s\n", text[i]);
	}
}