#include<stdio.h>
#include<string.h>

struct student {	//���� ����ü ����
	int num;
	char name[30];
	double score;
};


int main() {


	struct student s1 = { 201814102, "�ڰ�", 4.5 };

	/*
	s1.num = 201814102;	// �� �Է�
	s1.name = '�ڰ�';	//�� �Է�
	s1.score = 4.5;	//�� �Է�
	*/
	printf("�̸�: %s\n", s1.name);	//�� ���
	printf("�й�: %d\n", s1.num);	// �� ���
	printf("����: %.2f\n", s1.score);	//�� ���

	return 0;


}