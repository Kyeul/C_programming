#include <stdio.h>

int main() {
	//���ĺ��� �Է¹��� ����
	char ch;
	//������ �Է¹��� ����1
	int num;
	printf("���ĺ� �Է� : ");
	//���ĺ� �Է�
	scanf("%c", &ch);
	printf("�� ���� ����Ͻðڽ��ϱ�? ");
	//���� �Է�
	scanf("%d", &num);
	printf("�Էµ� ���ĺ� : %c, ���� : %d\n", ch, num);
	//������ 0���� Ŭ �� ���� �ϳ��� �����ϸ鼭 �ݺ�
	for (; num > 0; num--) {
		printf("%c %d\n", ch, ch);
		//���� �ƽ�Ű �ڵ� ����� ���� �� ����
		ch++;
	}
	return 0;
}
