#include<stdio.h>

struct point
{
	int xpos;	//x좌표 맴버 선언
	int ypos;	//y좌표 맴버 선언
};

int main() 
{
	struct point arr[3];	//구조체 배열 arr 선언
	int i;	//반복문에 쓸 i 선언
		
	for (i = 0; i < 3; i++)	//반복문 3회
	{
		printf("점의 좌표 입력: ");	//안내
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);	//입력
	}

	for (i = 0; i < 3; i++)	//반복문
		printf("[%d %d]", arr[i].xpos, arr[i].ypos);	// 출력

	return 0;
}