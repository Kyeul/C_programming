/*
주제: 배열연습
작성자: 박결
날짜: 6월 4일*/


#include<stdio.h>

int main() {

	char a[30];	//문자를 입력받을 배열 선언
	char b[30];
	int i;	//반복문 변수 선언

	printf("문자열 입력:");	//안내문 출력
	scanf("%s", a);	//문자열 입력
	printf("입력받은 문자열은 %s\n", a);	//안내문 출력

	for (i = 0; a[i] != '\0'; i++)	//반복문
	{
		
		if (a[i] < 'a')	// 배열이 아스키코드 a보다 작으면 아스키 값을 32를 더해라
			b[i] = a[i] + 32;
		else
			b[i] = a[i];	// 그렇지 않으면 그냥 저장해라 
	}
	b[i] = '\0';	//마지막에 널문자 삽입
	printf("%s\n", b);//출력
}