#include <stdio.h>
#include "vote.h"

int main()
{
	struct vote v[3] = { 
		{ "김일수", 0 },
		{ "김이수",0 },
		{ "김삼수", 0 } 
	};

	int max, sum = 0;//max는 최고득표저장, sum은 유효득표수 저장
	int a, i, k = 0; //a는 사용자 입력 받기
					 //i는 반복문용
					 //k는 최고득표자 인덱스 값 저장

	while (1)
	{
		printf("지지하는 후보 번호를 입력하세요:(끝내려면 0)");
		scanf("%d", &a);//후보번호 입력받기
		if (a == 0) break;//0을 입력하면 입력 끝
		if (a < 1 || a>3) continue;	//1과 3사이 값이 아니면 
									//다시 입력받기

		//v[a - 1].count = v[a - 1].count - 1; //7. 배열은 0부터 시작하므로 1 빼서 저장
		v[a - 1].count++;

		sum++;//총 유효득표수 계산
	}
	printf("총 유효 득표수: %d\n", sum);
	max = v[0].count;//최고 득표자를 구하기 위해 첫 값으로 초기화
	for (i = 0; i<3; i++) //최고득표자 계산을 위해 반복
	{
		//각 후보 득표수 출력
		printf("후보자 %d: %s 득표수 %d\n",
			i + 1, v[i].name, v[i].count);
		//만약 현재 후보의 득표수가 max값 보다 크면 max
		//값을 이 값으로 변경하고, 이때의 index를 k에 저장
		// 8. 아래에 여러 줄의 문장 필요
		if (max < v[i].count)
		{
			max = v[i].count;
			k = i;
		}


	}
	// 당선자 출력
	printf("당선자: %s 득표수 %d\n", v[k].name, v[k].count);
	return 0;
}
