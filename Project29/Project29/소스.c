#include <stdio.h>
#include <math.h>

//double sqrt(double x);

int main() {

	double result1, result2;	//����� ������ ����
	struct position {	//����ü ����
		int xpos;	//x��ǥ ���� 
		int ypos;	//y��ǥ ����
	};

	struct position p1, p2;	//���� �����͸� ������ ������ �Ҵ�ȴ�.

	/*
	// p1�� ��ǥ�� (5, 3)�̴�.
	p1.xpos = 5;	// p1�� x���� 5
	p1.ypos = 3;	// p1�� y���� 3

	// p2�� ��ǥ�� (7, 5)��.
	p2.xpos = 7;	//p2�� x���� 7
	p2.ypos = 5;	//p2�� y���� 5
	*/
	printf("p1�� x��ǥ�� y��ǥ�� �Է��Ͻÿ�.");
	scanf("%d %d", &p1.xpos, &p1.ypos);	//p1��ǥ �Է�
	printf("p2�� x��ǥ�� y��ǥ�� �Է��Ͻÿ�.");
	scanf("%d %d", &p2.xpos, &p2.ypos);	//p2��ǥ �Է�

	printf("p1�� ��ǥ�� (%d, %d)�̴�.\n", p1.xpos, p1.ypos);
	printf("p2�� ��ǥ�� (%d, %d)�̴�.\n", p2.xpos, p2.ypos);

	result1 = (p1.xpos - p2.xpos)*(p1.xpos - p2.xpos);
	result2 = (p1.ypos - p2.ypos)*(p1.ypos - p2.ypos);

	printf("�� ��ǥ ������ �Ÿ��� %.2f��.", sqrt(result1 + result2));


}