#include<stdio.h>

int main() {

	int candi[5] = { 0,0,0,0,0 };	//후보자 득표를 담을 변수
	int count = 0;	//총득표를 계산할 변수
	int num;	//조건문을 실행할 변수

	printf("득표 계산을 시작합니다. 종료는 0을 누르세요.\n\n");
	while (1) {
		printf("몇 번 후보가 득표했나요.");
		scanf("%d", &num);

		if (num == 1)
			candi[0] += 1;
		else if (num == 2)
			candi[1] += 1;
		else if (num == 3)
			candi[2] += 1;
		else if (num == 4)
			candi[3] += 1;
		else if (num == 5)
			candi[4] += 1;
		else if (num == 0)
			break;
		else
		{
			printf("잘못된 수를 입력했습니다. 다시 입력합니다.\n");
			continue;
		}
		count += 1;
	}

	printf("\n <<총 투표수: %d >>\n\n", count);

	for (num = 0; num < 5; num++)
	{
		printf("<%d> 후보자\n", num + 1);
		printf("득표수: %d,\t", candi[num]);
		printf("득표율: %.3f ", (double)candi[num] / count);
		printf("\n\n");

	}
}