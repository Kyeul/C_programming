#include <stdio.h>
#include "movie.h"

double average(int element1, int element2);

int main() 
{
	int i, num, grade;	//�Է¹��� ��������
	double aver;

	struct movies content[] = {
		{"1","���� ����",2018,0,0},	//content[0]
		{"2","Ž��",2018,0,0},		//content[1]
		{"3","���ǽ�",2018,0,0},	//content[2]
		{"4","����",2018,0,0},	//content[3]
		{"5","������ȯ",2017,0,0},	//content[4]
	};
	for (i = 0; i < 5; i++)	//���� ����
	{
		printf("%s. %s, %d \n",content[i].movie_num, content[i].name, content[i].made_year);
	}
	
	printf("\n");
	while (1)	//�ݺ��� ����
	{
		printf("��ȭ��ȣ �Է�:");		//�ȳ��� ���
		scanf("%d", &num);	// �Է�
		
		if ((num < 1) || (num > 6))	// ������ ���� ��Ƽ��
			continue;
		else if (num == 6)	//����
		{
			printf("����!\n");
			break;
		}
		printf("[%s]\n", content[num - 1].name);	//�̸� ���
		content[num-1].vote_people++;	//�ο� ����
		printf("����(0~5): ");	//�ȳ��� ���
		scanf("%d", &grade);	//���� �Է�
		content[num-1].grade += grade;	//���� ����	
		}
	// ���!
	for (i = 0; i < 5; i++)
	{
		printf("\t%s. %s, %d,���ο�: %d, ", content[i].movie_num, content[i].name, content[i].made_year, content[i].vote_people);	//���
		if (content[i].vote_people == 0)	//��ǥ ���� ���� ������ ����� 0���� �ʱ�ȭ
		{
			aver = 0.0;
		}
		else  //�ƴϸ� ���
		{//aver = ((double)content[i].grade / content[i].vote_people);	// ��� ���
			printf("����: %.2f \n\n", average(content[i].grade, content[i].vote_people));	//��� ���
		}
	}
}

double average(int element1, int element2)
{
	double ave;

	return ave = (double)element1 / element2;
}