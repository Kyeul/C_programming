#include<stdio.h>
#define LIMIT 4

int global;		// 0으로 자동 초기화

void sub(void);		//함수 선언

int main() {
	
	int i;	//변수 i 선언
	static int static_count = 4;	//static int형 변수 선언과 4로 초기화
	int auto_count = 0;	//int형 변수 0으로 초기화
	int *pi = &static_count;	//포인터 선언과 static_count 주소값을 저장

	//4

	global = 3;	//전역변수 global을 3으로 초기화
	for (i = 0; i < LIMIT; i++) {	//4번 실행됨
		++auto_count;	//1->2->3->4
		static_count--;	//3->2->1->0
			++global;	//4->(5)->6->(7)->8->(9)->10
			sub();	// 함수로 간다.
	}

	//5
	printf("auto_count= %d\n", auto_count);	//4
	printf("static_count=%d\n", static_count);	//0
	printf("global =%d\n", global);	//(11)
	printf("*pi =%d\n", *pi);	//0
	//5
	return 0;
}

void sub(void)
{
	int auto_count = 3;	//지역 변수 선언과 3으로 초기화
	static int static_count = 2;	//sub 내에서 소멸하지 않는 static_count를 2로 초기화

	auto_count++;	//4->4->4->4
	static_count = static_count + 1;	//3->4->5->6 (?) 계속 증가한다.
	global++;	//5->(6)->7->(8)->9->(10)->11
	printf("(sub)auto_count =%d\n", auto_count);
	printf("(sub)static_count=%d\n", static_count);
	printf("(sub)global=%d\n", global);
}