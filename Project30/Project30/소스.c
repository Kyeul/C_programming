#include<stdio.h>
#include<string.h>

struct student {	//학적 구조체 선언
	int num;
	char name[30];
	double score;
};


int main() {


	struct student s1 = { 201814102, "박결", 4.5 };

	/*
	s1.num = 201814102;	// 값 입력
	s1.name = '박결';	//값 입력
	s1.score = 4.5;	//값 입력
	*/
	printf("이름: %s\n", s1.name);	//값 출력
	printf("학번: %d\n", s1.num);	// 값 출력
	printf("학점: %.2f\n", s1.score);	//값 출력

	return 0;


}