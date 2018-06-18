/*
주제: 구조체 내에 맴버(member)로서 구조체 정의
*/
#include<stdio.h>
#include"rectangle.h"
// 좌표평면의 점을 표현



int main() {
	//사각형을 초기화
	struct rectangle r; //구조체 변수 r을 선언 //= { {3,3}, {5,4} };
	struct point pp1;
	struct point pp2;

	r.p1 = &pp1;	//pp1의 주소값을 r의 p1에 저장
	r.p2 = &pp2;	//pp2의 주소값을 r의 p2에 저장

	printf("사각형을 이룰 두 좌표를 입력하시오.\n");	//안내문 출력
	printf("x1좌표를 입력하시오.");	//안내문
	scanf("%d", &pp1.x);	//x1좌표 입력
	printf("x2좌료를 입력하시오. (x1과 다른 좌표를 입력하시오)");	//안내문
	scanf("%d", &pp2.x);	//x2좌표 입력
	while (1) {	//반복문 실행
		if (pp1.x == pp2.x) {	//조건 
			printf("서로 다른 x좌표를 쓰세요.");
			scanf("%d", &pp2.x);
		}
		else	//반복문 탈출
			break;
	}
	
	printf("y1좌표를 입력하시오.");	//안내문
	scanf("%d", &pp1.y);	//
	printf("y2좌료를 입력하시오. (x1과 다른 좌표를 입력하시오)");
	scanf("%d", &pp2.y);
	while (1) {
		if (pp1.y == pp2.y) {
			printf("서로 다른 x좌표를 쓰세요.");
			scanf("%d", &pp2.y);
		}
		else
			break;
	}

	printf("입력받은 좌표는 다음과 같습니다.\n");
	//사각형의 두 점을 출력
	printf("(%d, %d), (%d, %d)", r.p1->x, r.p1->y, r.p2->x, r.p2->y);
	printf(", (%d, %d), (%d, %d)\n", r.p1->x, r.p2->y, r.p2->x, r.p1->y);		//-> 연산자 포인터를 따라가서 값을 가져와라.
	//중요한 것은 구조체에 포인터 변수가 들어갈 수 있다.
}