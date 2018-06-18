#include<stdio.h>

struct point {
	int xpos;	// 인트형 맴버 선언
	int ypos;	//인트형 맴버 선언
};

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct point pos = { 10,20 };
}