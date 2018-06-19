#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1 = { 1,2 };	//����ü ���� pos1�� ����� ���ÿ� �ʱ�ȭ
	struct point pos2 = { 100,200 };	//����ü ���� pos2�� ����� ���ÿ� �ʱ�ȭ
	struct point *pptr = &pos1;	//����ü ������ ���� pptr�� pos1�ּҰ��� ����

	(*pptr).xpos += 4;	//pptr�� ����� pos1�� xpos�� 4�� ���ؼ� ���� => 5�� ����� ��
	(*pptr).ypos += 5;	//pptr�� ����� pos1�� ypos�� 5�� ���ؼ� ���� => 7�� ����� ��
	printf("[%d %d] \n", pptr->xpos, pptr->ypos);	//pptr-> xpos�� *pptr.xpos�� ������ ��. ���� pos1.xpos�� ��µ� ��.

	pptr = &pos2;	//������ ���� pptr�� pos2 �ּҰ��� ����.
	pptr->xpos += 1;	//*pptr.xpos�� 1�� ���ؼ� ���� => 101�� ��.
	pptr->ypos += 2;	//*pptr.ypos�� 2�� ���ؼ� ���� => 202�� ��.
	printf("[%d %d] \n", (*pptr).xpos, (*pptr).ypos);	//pptr->xpos�� ��µ�. �� pos2.xpos�� ��µǹǷ� 101�� ��µ�.

	return 0;

}