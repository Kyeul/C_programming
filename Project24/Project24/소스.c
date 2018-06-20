#include<stdio.h>
int main() {

	char a[30];	//char형 배열 30개 선언
	char b[30];	//reverse 저장할 배열 선언

	int len = 0;
	int i;	//반복문 변수
	
	printf("문자열을 입력: ");	//안내문 출력
	scanf("%s", a);

	printf("입력받은 문자: %s\n", a);	//입력 받은 문자열 출력	

	//일단 길이를 구해야함
	for (i = 0; a[i] != '\0'; i++) {
		++len;
	}
	printf("문자열 길이는 : %d\n", len);

	i = 0;
	b[len + 1] = '\0'; //리버스 배열 의 길이에 1을 더하고 그 자리에 '\0' 문자 끝을 넣음
	for (len+1; len >= 0; len--)
	{
		b[len] = a[i];	//배열의 길이만큼 리버스 저장.
		i++;
		printf("%s", b[len]);
	}

	//일단 여기까지 만들어서 저장하고 난뒤에 검사 해야함.
	
	printf(" 거꾸로 쓴 문장 %s \n", b);
	//검사 문장을 써보자.

	for (i = 0; i < len; i++)
	{
		if (a[i] != b[i])
		{
			printf("%s는 회문이 아닙니다.\n",a);
			break;
		}
	}

	printf("%s는 회문입니다.\n", a);
	return 0;
}