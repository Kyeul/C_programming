#include<stdio.h>

int a;

int call(void) {

	printf("정수 입력");
	//scanf("%d", &a);

	//return a;
}

int main() {

	int arr[3];

	arr[0] = call();
	arr[1] = call();
	arr[2] = call();

	for (int i = 0; i < 3; i++) 
	{
		printf("arr[%d]의 값은 %d입니다.\n", i, arr[i]);
	}
	return 0;
}