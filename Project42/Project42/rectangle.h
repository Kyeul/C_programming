#pragma once

struct point {
	int x;
	int y;
};

//��ǥ����� ���簢���� ǥ��
//����ü �� ������ ����
struct rectangle {
	//�� ���� ������ ǥ��
	struct point *p1;	//������ Ÿ������ ����
	struct point *p2;	//"
};