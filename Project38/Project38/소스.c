/*
���� ����ü�� �迭�� ����
�ۼ���: 18�� 6�� 12��
�ۼ���: �ڰ�
*/

#include<stdio.h>

#define SIZE 3	//SIZE�� 3�̶�� ����. �̴� ���߿� ������ �����ϴ�.
#define PI 3.1415	//PI�� 3.1415��� ����. 

struct circle {	//����ü circle ����
	
	int order;
	int xpos;	//����ü ù��° ��Ʈ�� x��ǥ
	int ypos;	//����ü �ι�° ��Ʈ�� y��ǥ
	int rad;	//����ü ����° ��Ʈ�� ������
};

double circle_area(struct circle a) {	// struct�� �Ű������� �ϴ� �Լ� ����
	return a.rad * a.rad*PI;
}
int main() {

	int i;	// �ݺ����� ���� ���� ����
	struct circle a[SIZE] = {	//����ü�� �迭�� ���� �� �ִ�.
		{1,3,5,5},	//����ü 1
		{2,4,-1,3},	//����ü 2
		{3,-3,0,2}	//����ü 3

	};
	
	/*
	for (i = 0; i < SIZE; i++) {	//�ݺ��� 
		printf("%d��° ���� x��ǥ�� ������:", i+1);	//
		//scanf("%d", &a[i].xpos);	//����ü a�� xpos�� �Է�
		printf("%d��° ���� y��ǥ�� ������:", i+1);
		//scanf("%d", &a[i].ypos);	//����ü a�� ypos�� �Է�
		printf("%d��° ���� x��ǥ�� ������:", i+1);
		//scanf("%d", &a[i].rad);	//����ü a�� rad�� �Է�
	}
	*/
	printf("\n<�� ����>\n\n");	//������
	for (i = 0; i < SIZE; i++) {	//�ݺ��� ���
		printf("%d ��° ���� �߽� ( %d, %d) ������: %d \n", a[i].order, a[i].xpos, a[i].ypos, a[i].rad);	//���
		printf("���� ���̴� : %.2f\n", circle_area( a[i]));
		printf("-------------\n");
	}
	

}

