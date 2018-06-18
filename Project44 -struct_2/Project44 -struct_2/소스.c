#include<stdio.h>
#include<string.h>	//스트링 헤더파일 호출

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");	//strcpy는 무엇일까?
	strcpy(man1.phonenum, "010-1122-3344");
	man1.age = 23;

	printf("이름: "); scanf("%s", man2.name);
	printf("번호: "); scanf("%s", man2.phonenum);
	printf("나이: "); scanf("%d", &(man2.age));	//&를 왜 괄호에 붙혔을까???

	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phonenum);
	printf("나이: %d \n", man1.age);

	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phonenum);
	printf("나이: %d \n", man2.age);

	return 0;
}