#include<stdio.h>

struct point
{
	int xpos;	//x��ǥ �ɹ� ����
	int ypos;	//y��ǥ �ɹ� ����
};

int main() 
{
	struct point arr[3];	//����ü �迭 arr ����
	int i;	//�ݺ����� �� i ����
		
	for (i = 0; i < 3; i++)	//�ݺ��� 3ȸ
	{
		printf("���� ��ǥ �Է�: ");	//�ȳ�
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);	//�Է�
	}

	for (i = 0; i < 3; i++)	//�ݺ���
		printf("[%d %d]", arr[i].xpos, arr[i].ypos);	// ���

	return 0;
}