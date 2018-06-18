#include <stdio.h>
#include "movie.h"

double average(int element1, int element2);

int main() 
{
	int i, num, grade;	//입력받을 변수선언
	double aver;

	struct movies content[] = {
		{"1","쥬라기 월드",2018,0,0},	//content[0]
		{"2","탐정",2018,0,0},		//content[1]
		{"3","오션스",2018,0,0},	//content[2]
		{"4","독전",2018,0,0},	//content[3]
		{"5","물물교환",2017,0,0},	//content[4]
	};
	for (i = 0; i < 5; i++)	//정보 제공
	{
		printf("%s. %s, %d \n",content[i].movie_num, content[i].name, content[i].made_year);
	}
	
	printf("\n");
	while (1)	//반복문 돌기
	{
		printf("영화번호 입력:");		//안내문 출력
		scanf("%d", &num);	// 입력
		
		if ((num < 1) || (num > 6))	// 나머지 수는 컨티뉴
			continue;
		else if (num == 6)	//종료
		{
			printf("종료!\n");
			break;
		}
		printf("[%s]\n", content[num - 1].name);	//이름 출력
		content[num-1].vote_people++;	//인원 저장
		printf("평점(0~5): ");	//안내문 출력
		scanf("%d", &grade);	//점수 입력
		content[num-1].grade += grade;	//점수 저장	
		}
	// 출력!
	for (i = 0; i < 5; i++)
	{
		printf("\t%s. %s, %d,평가인원: %d, ", content[i].movie_num, content[i].name, content[i].made_year, content[i].vote_people);	//출력
		if (content[i].vote_people == 0)	//투표 받지 못한 값에는 평균을 0으로 초기화
		{
			aver = 0.0;
		}
		else  //아니면 출력
		{//aver = ((double)content[i].grade / content[i].vote_people);	// 평균 계산
			printf("평점: %.2f \n\n", average(content[i].grade, content[i].vote_people));	//평균 출력
		}
	}
}

double average(int element1, int element2)
{
	double ave;

	return ave = (double)element1 / element2;
}