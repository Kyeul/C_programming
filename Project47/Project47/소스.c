#include <stdio.h>
#include "header.h"

int main()
{
	int i;	//반복문을 실행할 변수
	struct employee member[3];

	for (i = 0; i < 3; i++)
	{
		printf("직원명 입력");
		scanf("%s", member[i].name);
		printf("전화번호 입력");
		scanf("%s", member[i].phonenum);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s의 번호는 %s입니다. \n", member[i].name, member[i].phonenum);

	}
	return 0;
}