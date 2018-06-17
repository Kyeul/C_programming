#include<stdio.h>
#define LIMIT 4

int global;		// 0���� �ڵ� �ʱ�ȭ

void sub(void);		//�Լ� ����

int main() {
	
	int i;	//���� i ����
	static int static_count = 4;	//static int�� ���� ����� 4�� �ʱ�ȭ
	int auto_count = 0;	//int�� ���� 0���� �ʱ�ȭ
	int *pi = &static_count;	//������ ����� static_count �ּҰ��� ����

	//4

	global = 3;	//�������� global�� 3���� �ʱ�ȭ
	for (i = 0; i < LIMIT; i++) {	//4�� �����
		++auto_count;	//1->2->3->4
		static_count--;	//3->2->1->0
			++global;	//4->(5)->6->(7)->8->(9)->10
			sub();	// �Լ��� ����.
	}

	//5
	printf("auto_count= %d\n", auto_count);	//4
	printf("static_count=%d\n", static_count);	//0
	printf("global =%d\n", global);	//(11)
	printf("*pi =%d\n", *pi);	//0
	//5
	return 0;
}

void sub(void)
{
	int auto_count = 3;	//���� ���� ����� 3���� �ʱ�ȭ
	static int static_count = 2;	//sub ������ �Ҹ����� �ʴ� static_count�� 2�� �ʱ�ȭ

	auto_count++;	//4->4->4->4
	static_count = static_count + 1;	//3->4->5->6 (?) ��� �����Ѵ�.
	global++;	//5->(6)->7->(8)->9->(10)->11
	printf("(sub)auto_count =%d\n", auto_count);
	printf("(sub)static_count=%d\n", static_count);
	printf("(sub)global=%d\n", global);
}