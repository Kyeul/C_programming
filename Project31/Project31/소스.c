#include<stdio.h>

struct men 
{
	char name[30];
	int age;
	
};

int main()
{
	struct men men1, men2;

	printf("1. ���������� ��������. (�̸�, ����)");
	scanf("%s %d", &men1.name, men1.age);

	printf("1. ���������� ��������. (�̸�, ����)");
	scanf("%s %d", &men2.name, men2.age);

	printf("%s %d\n", men1.name, men1.age);

	return 0;

}