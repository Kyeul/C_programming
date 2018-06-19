#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point *center;
};

int main() 
{
	struct point cen = { 2,7 };	//구조체 point 변수 cen의 xpos에 2를 ypos에 7을 저장
	double rad = 5.5;	//더블형 변수 rad에 5.5 저장

	struct circle ring = { rad, &cen };	//구조체 circle 변수 ring을 선언하고 radius에 rad=5.5를 저장, struct point 포인터 center에 구조체 cen 주소 저장
	
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심: [%d, %d] \n", ring.center->xpos, ring.center->ypos);	//ring의 맴버 포인터 center가 가르키는 xpos값을 호출

	return 0;

}