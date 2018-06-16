#include<stdio.h>

int main() {
	
	int num;	//증가시키면서 100이하의 N과 M의 배수를 구할 변수

	for (num = 1; num <= 100; num++) {
		/*
		if (num % 3 == 0 || num % 4 == 0) {
			printf("3 또는 4의 배수: %d \n", num);
		}
		*/

		if (num % 3 == 0) {
			printf("3의 배수: %d\n", num);
		}
		else if(num % 4 == 0) {
			printf("4의 배수: %d\n", num);
		}
	}
	return 0;
}