#include<stdio.h>
#include<string.h>	//��Ʈ�� ������� ȣ��

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct person man1, man2;
	strcpy(man1.name, "�ȼ���");	//strcpy�� �����ϱ�?
	strcpy(man1.phonenum, "010-1122-3344");
	man1.age = 23;

	printf("�̸�: "); scanf("%s", man2.name);
	printf("��ȣ: "); scanf("%s", man2.phonenum);
	printf("����: "); scanf("%d", &(man2.age));	//&�� �� ��ȣ�� ��������???

	printf("�̸�: %s \n", man1.name);
	printf("��ȣ: %s \n", man1.phonenum);
	printf("����: %d \n", man1.age);

	printf("�̸�: %s \n", man2.name);
	printf("��ȣ: %s \n", man2.phonenum);
	printf("����: %d \n", man2.age);

	return 0;
}