/*
scanf함수 실수로 입력받기
박결
4월 12일
*/

#include <stdio.h>	//헤더파일 불러오기

int main() {	//메인함수 지정
	float num1;	//float형 변수 선언
	double num2;	//double 형 변수 선언
	long double num3;	//long double형 변수 선언

	printf("실수 입력1(e표기법으로): ");
	scanf("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e표기법으로): ");
	scanf("%lf", &num2);
	printf("입력된 실수 %f \n", num2);
	
	printf("실수 입력3(e표기법으로): ");
	scanf("%Lf", &num3);
	printf("입력된 실수 %Lf \n", num3);
	
	return 0;
}