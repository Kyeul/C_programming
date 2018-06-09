#include<stdio.h>
int main()
{
	char *text[] = { "수학", "과학", "국어","뷁뷁뷁" };
	int i;

	printf("text의 크기: %d\n", sizeof(text));

	for (i = 0; (sizeof(text)/4)=0; i++) {
		printf("%s\n", text[i]);
	}
}