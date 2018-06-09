#include<stdio.h>
int main() {

	int *arr[3];	//정수형 포인터 배열 선언
	int i;	//반복문 변수 선언
	int a = 4, b = 9, c = 12;	//a, b, c를 초기화
	arr[0] = &a;	// 배열에 주소저장
	arr[1] = &b;	// 배열에 주소저장
	arr[2] = &c;	// 배열에 주소저장
	
	for (i = 0; i < 3; i++) {	//반복문
		printf("*arr[%d] = %d\n", i, *arr[i]);	//포인터이 가르키는 값 출력
	}
	

}