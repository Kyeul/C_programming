#include<stdio.h>

int com(int, int);	//절댓값 비교
int get(int);	//전달 인자를 절댓값으로 반환

int main() {

	int num1, num2;	//입력받을 정수 선언
	
	printf("두 개의 정수를 입력하세요.\n");
	scanf("%d %d", &num1, &num2);

	printf("%d와 %d 중 절댓값이 큰 정수는 %d 이다. \n", num1, num2, com(num1, num2));
	
	return 0;

}

int com(int a, int b) {
	if (get(a) > get(b))
		return get(a);
	else if (get(a) < get(b))
		return get(b);
	else
		return get(a);
}

int get(int a) {
	
	if (a < 0)
		return a *= -1;
	else
		return a;
}