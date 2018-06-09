#include<stdio.h>
int main() {

	char a[30];	//char형 배열 30개 선언
	char b[30];
	int len = -1;
	int i;	//반복문 i선언
	
	printf("문자열을 입력: ");	//안내문 출력
	scanf("%s", a);

	printf("입력받은 문자: %s\n", a);	//입력 받은 문자열 출력	

	for (i = 0; a[i] != '\0'; i++) {
		len++;
	}
	i = 0;
	b[len + 1] = '\0';
	for (len+1; len >= 0; len--)
	{
		b[len] = a[i];
		i++;
	}
	
	printf("%s\n", b);
	
}