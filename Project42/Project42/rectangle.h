#pragma once

struct point {
	int x;
	int y;
};

//좌표평면의 직사각형을 표현
//구조체 속 포인터 정의
struct rectangle {
	//두 개의 점으로 표현
	struct point *p1;	//포인터 타입으로 정의
	struct point *p2;	//"
};