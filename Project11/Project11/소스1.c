#include <stdio.h>
int main()
{
	int num;	//횟수를 입력받을 변수	
	int i = 1;	//반복문 실행을 위한 변수

	scanf("%d", &num);
	for (; i <= num; i++)
		printf("Hello World! \n");
	
	return 0;
}