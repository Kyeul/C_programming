#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct point pos = { 10, 20 }, pos2 = {20, 30};	//�ϳ��� �������𿡴� �迭ó�� �� �ʱ�ȭ�� �����ϴ�. �׷��ٸ� �ΰ��� ��� �ұ�? -> ,�� �����ϰ� ����
	struct person man = { "�̽±�","010-1234-1212", 21 };
	
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%d %d\n", pos2.xpos, pos2.ypos);
	printf("%s %s %d \n", man.name, man.phonenum, man.age);

	return 0;
}