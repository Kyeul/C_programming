#pragma once
struct point {
	int x;
	int y;
};

//좌표평면의 직사각형을 표현
struct rectangle {
	//두 개의 점으로 표현
	struct point p1;
	struct point p2;
};