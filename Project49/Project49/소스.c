#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point *center;
};

int main() 
{
	struct point cen = { 2,7 };	//����ü point ���� cen�� xpos�� 2�� ypos�� 7�� ����
	double rad = 5.5;	//������ ���� rad�� 5.5 ����

	struct circle ring = { rad, &cen };	//����ü circle ���� ring�� �����ϰ� radius�� rad=5.5�� ����, struct point ������ center�� ����ü cen �ּ� ����
	
	printf("���� ������: %g \n", ring.radius);
	printf("���� �߽�: [%d, %d] \n", ring.center->xpos, ring.center->ypos);	//ring�� �ɹ� ������ center�� ����Ű�� xpos���� ȣ��

	return 0;

}