#include <stdio.h>

int main() {
	//알파벳을 입력받을 변수
	char ch;
	//개수를 입력받을 변수1
	int num;
	printf("알파벳 입력 : ");
	//알파벳 입력
	scanf("%c", &ch);
	printf("몇 개를 출력하시겠습니까? ");
	//개수 입력
	scanf("%d", &num);
	printf("입력된 알파벳 : %c, 개수 : %d\n", ch, num);
	//개수가 0보다 클 때 까지 하나씩 감소하면서 반복
	for (; num > 0; num--) {
		printf("%c %d\n", ch, ch);
		//다음 아스키 코드 출력을 위한 값 증가
		ch++;
	}
	return 0;
}
