#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1 = { 1,2 };	//구조체 변수 pos1을 선언과 동시에 초기화
	struct point pos2 = { 100,200 };	//구조체 변수 pos2를 선언과 동시에 초기화
	struct point *pptr = &pos1;	//구조체 포인터 변수 pptr에 pos1주소값을 저장

	(*pptr).xpos += 4;	//pptr이 저장된 pos1의 xpos에 4를 더해서 저장 => 5가 저장될 것
	(*pptr).ypos += 5;	//pptr이 저장된 pos1의 ypos에 5를 더해서 저장 => 7이 저장될 것
	printf("[%d %d] \n", pptr->xpos, pptr->ypos);	//pptr-> xpos는 *pptr.xpos와 동일한 말. 따라서 pos1.xpos가 출력될 것.

	pptr = &pos2;	//포인터 변수 pptr에 pos2 주소값을 저장.
	pptr->xpos += 1;	//*pptr.xpos에 1을 더해서 저장 => 101이 됨.
	pptr->ypos += 2;	//*pptr.ypos에 2를 더해서 저장 => 202가 됨.
	printf("[%d %d] \n", (*pptr).xpos, (*pptr).ypos);	//pptr->xpos가 출력됨. 즉 pos2.xpos가 출력되므로 101이 출력됨.

	return 0;

}