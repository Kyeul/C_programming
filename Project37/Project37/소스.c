#include<stdio.h>

int com(int, int);	//���� ��
int get(int);	//���� ���ڸ� �������� ��ȯ

int main() {

	int num1, num2;	//�Է¹��� ���� ����
	
	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf("%d %d", &num1, &num2);

	printf("%d�� %d �� ������ ū ������ %d �̴�. \n", num1, num2, com(num1, num2));
	
	return 0;

}

int com(int a, int b) {
	if (get(a) > get(b))
		return get(a);
	else if (get(a) < get(b))
		return get(b);
	else
		return get(a);
}

int get(int a) {
	
	if (a < 0)
		return a *= -1;
	else
		return a;
}