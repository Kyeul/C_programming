#include<stdio.h>
int main() {

	char a[30];	//char�� �迭 30�� ����
	char b[30];
	int len = -1;
	int i;	//�ݺ��� i����
	
	printf("���ڿ��� �Է�: ");	//�ȳ��� ���
	scanf("%s", a);

	printf("�Է¹��� ����: %s\n", a);	//�Է� ���� ���ڿ� ���	

	for (i = 0; a[i] != '\0'; i++) {
		len++;
	}
	i = 0;
	b[len + 1] = '\0';
	for (len+1; len >= 0; len--)
	{
		b[len] = a[i];
		i++;
	}
	
	printf("%s\n", b);
	
}