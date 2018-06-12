/*
주제 구조체와 배열의 조합
작성일: 18년 6월 12일
작성자: 박결
*/

#include<stdio.h>

#define SIZE 3	//SIZE를 3이라고 지정. 이는 나중에 수정에 용이하다.
#define PI 3.1415	//PI를 3.1415라고 지정. 

struct circle {	//구조체 circle 선언
	
	int order;
	int xpos;	//구조체 첫번째 인트형 x좌표
	int ypos;	//구조체 두번째 인트형 y좌표
	int rad;	//구조체 세번째 인트형 반지름
};

double circle_area(struct circle a) {	// struct를 매개변수로 하는 함수 선언
	return a.rad * a.rad*PI;
}
int main() {

	int i;	// 반복문을 돌릴 변수 선언
	struct circle a[SIZE] = {	//구조체를 배열로 받을 수 있다.
		{1,3,5,5},	//구조체 1
		{2,4,-1,3},	//구조체 2
		{3,-3,0,2}	//구조체 3

	};
	
	/*
	for (i = 0; i < SIZE; i++) {	//반복문 
		printf("%d번째 원의 x좌표를 쓰세요:", i+1);	//
		//scanf("%d", &a[i].xpos);	//구조체 a의 xpos에 입력
		printf("%d번째 원의 y좌표를 쓰세요:", i+1);
		//scanf("%d", &a[i].ypos);	//구조체 a의 ypos에 입력
		printf("%d번째 원의 x좌표를 쓰세요:", i+1);
		//scanf("%d", &a[i].rad);	//구조체 a의 rad에 입력
	}
	*/
	printf("\n<원 계산기>\n\n");	//뉴라인
	for (i = 0; i < SIZE; i++) {	//반복문 출력
		printf("%d 번째 원의 중심 ( %d, %d) 반지름: %d \n", a[i].order, a[i].xpos, a[i].ypos, a[i].rad);	//출력
		printf("원의 넓이는 : %.2f\n", circle_area( a[i]));
		printf("-------------\n");
	}
	

}

