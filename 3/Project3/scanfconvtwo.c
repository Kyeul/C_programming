/*
scanf�Լ� �Ǽ��� �Է¹ޱ�
�ڰ�
4�� 12��
*/

#include <stdio.h>	//������� �ҷ�����

int main() {	//�����Լ� ����
	float num1;	//float�� ���� ����
	double num2;	//double �� ���� ����
	long double num3;	//long double�� ���� ����

	printf("�Ǽ� �Է�1(eǥ�������): ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);

	printf("�Ǽ� �Է�2(eǥ�������): ");
	scanf("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);
	
	printf("�Ǽ� �Է�3(eǥ�������): ");
	scanf("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf \n", num3);
	
	return 0;
}