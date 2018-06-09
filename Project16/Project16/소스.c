#include <stdio.h>

int main() {
	//변수 N정의
	int N = 1;
	//값들을 더할 변수 정의
	int sum = 0;
	//N이 1개씩 증가하면서 반복
	for (; ; N++) {
		//N의 제곱들을 더함
		sum = sum + (N * N);
		//합이 10000보다 클 경우 반복문 탈출
		if (sum > 10000) {
			//반복문 탈출
			break;
		}
	}
	printf("제곱의 합이 10000보다 커지는 첫번째 N은 %d다.\n", N);
	return 0;
}
