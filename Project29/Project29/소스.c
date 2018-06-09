#include <stdio.h>
#include <math.h>

//double sqrt(double x);

int main() {

	double result1, result2;	//결과를 저장할 변수
	struct position {	//구조체 선언
		int xpos;	//x좌표 변수 
		int ypos;	//y좌표 변수
	};

	struct position p1, p2;	//실제 데이터를 저장할 공간이 할당된다.

	/*
	// p1의 좌표는 (5, 3)이다.
	p1.xpos = 5;	// p1의 x값은 5
	p1.ypos = 3;	// p1의 y값은 3

	// p2의 좌표는 (7, 5)다.
	p2.xpos = 7;	//p2의 x값은 7
	p2.ypos = 5;	//p2의 y값은 5
	*/
	printf("p1의 x좌표와 y좌표를 입력하시오.");
	scanf("%d %d", &p1.xpos, &p1.ypos);	//p1좌표 입력
	printf("p2의 x좌표와 y좌표를 입력하시오.");
	scanf("%d %d", &p2.xpos, &p2.ypos);	//p2좌표 입력

	printf("p1의 좌표는 (%d, %d)이다.\n", p1.xpos, p1.ypos);
	printf("p2의 좌표는 (%d, %d)이다.\n", p2.xpos, p2.ypos);

	result1 = (p1.xpos - p2.xpos)*(p1.xpos - p2.xpos);
	result2 = (p1.ypos - p2.ypos)*(p1.ypos - p2.ypos);

	printf("두 좌표 사이의 거리는 %.2f다.", sqrt(result1 + result2));


}