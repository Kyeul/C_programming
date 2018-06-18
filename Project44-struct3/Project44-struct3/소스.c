#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct point pos = { 10, 20 }, pos2 = {20, 30};	//하나의 변수선언에는 배열처럼 값 초기화가 가능하다. 그렇다면 두개는 어떻개 할까? -> ,로 구분하고 가능
	struct person man = { "이승기","010-1234-1212", 21 };
	
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);
	printf("%s %s %d \n", man.name, man.phonenum, man.age);

	return 0;
}