#include<stdio.h>

int oo(int a, int b) {	//���� ���� o ��ȯ 0
	int result;
	result = a + b;
	return result;
}

int ox(int num) {
	printf("(%d)���ڴ� ���� �޾����� ��ȯ�� �����ϴ�.\n", num);
}

int xo(void) {
	
	int num;
	printf("������ �Է��ϼ���.");
	scanf("%d", &num);

	return num;
}

int xx(void) {
	printf("�������޵� ���� ��ȯ�� �����ϴ�.\n");
}

int main() {
	
	int i;	//�ݺ����� ������ ����
	int a;	//��ư���� �� ����
		//��������
	while (1)
	{
		printf("�Լ� ����, ��ȯ ����. 1~4���� ������. <�׿ܴ� ����>\n");
		scanf("%d", &a);

		if (a == 1) {
			int n1, n2;	//���ǹ� �ȿ��� �� �������� ����
			printf("1���� ����. \n�� ������ �Է��ϼ���.");	//�ȳ��� ���
			scanf("%d %d", &n1, &n2);
			printf("������ ���� %d�Դϴ�.\n", oo(n1, n2));
		}

		else if (a == 2) {
			int n1;	//���ǹ� �ȿ��� �������� ����
			printf("������ �Է��Ͻÿ�.\n");
			scanf("%d", &n1);
			ox(n1);
		}

		else if (a == 3) {
			int n1;
			n1 = xo();
			printf("��� �Է¹��� ���� %d\n", n1);
		}

		else if (a == 4) {
			xx();

		}

		else
			break;
	}


}