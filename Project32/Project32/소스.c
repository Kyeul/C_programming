#include<stdio.h>

int main() {

	int candi[5] = { 0,0,0,0,0 };	//�ĺ��� ��ǥ�� ���� ����
	int count = 0;	//�ѵ�ǥ�� ����� ����
	int num;	//���ǹ��� ������ ����

	printf("��ǥ ����� �����մϴ�. ����� 0�� ��������.\n\n");
	while (1) {
		printf("�� �� �ĺ��� ��ǥ�߳���.");
		scanf("%d", &num);

		if (num == 1)
			candi[0] += 1;
		else if (num == 2)
			candi[1] += 1;
		else if (num == 3)
			candi[2] += 1;
		else if (num == 4)
			candi[3] += 1;
		else if (num == 5)
			candi[4] += 1;
		else if (num == 0)
			break;
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�. �ٽ� �Է��մϴ�.\n");
			continue;
		}
		count += 1;
	}

	printf("\n <<�� ��ǥ��: %d >>\n\n", count);

	for (num = 0; num < 5; num++)
	{
		printf("<%d> �ĺ���\n", num + 1);
		printf("��ǥ��: %d,\t", candi[num]);
		printf("��ǥ��: %.3f ", (double)candi[num] / count);
		printf("\n\n");

	}
}