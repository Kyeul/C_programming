#include<stdio.h>

int oo(int a, int b) {	//인자 전달 o 반환 0
	int result;
	result = a + b;
	return result;
}

int ox(int num) {
	printf("(%d)인자는 전달 받았지만 반환은 없습니다.\n", num);
}

int xo(void) {
	
	int num;
	printf("정수를 입력하세요.");
	scanf("%d", &num);

	return num;
}

int xx(void) {
	printf("인자전달도 없고 반환도 없습니다.\n");
}

int main() {
	
	int i;	//반복문을 실행할 변수
	int a;	//버튼으로 쓸 변수
		//변수선언
	while (1)
	{
		printf("함수 인자, 반환 실험. 1~4까지 고르세요. <그외는 종료>\n");
		scanf("%d", &a);

		if (a == 1) {
			int n1, n2;	//조건문 안에서 쓸 지역변수 선언
			printf("1번을 택함. \n두 정수를 입력하세요.");	//안내문 출력
			scanf("%d %d", &n1, &n2);
			printf("정수의 합은 %d입니다.\n", oo(n1, n2));
		}

		else if (a == 2) {
			int n1;	//조건문 안에서 지역번수 선언
			printf("정수를 입력하시오.\n");
			scanf("%d", &n1);
			ox(n1);
		}

		else if (a == 3) {
			int n1;
			n1 = xo();
			printf("방금 입력받은 값은 %d\n", n1);
		}

		else if (a == 4) {
			xx();

		}

		else
			break;
	}


}