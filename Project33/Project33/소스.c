#include<stdio.h>

int main() {
	int dan=1;	//���� �ø� ����
	int num;	//�������� ����� ����

	while (1) {
		if ((dan % 2) == 0) 
		{
			for (num = 1; ; num++)
			{
				printf("%d x %d = %d\n", dan, num, dan*num);
				if (num == dan)
					break;
			}
			dan++;
		}
		else if(dan > 8)
			break;
		else{
			dan++;
			continue;
		}

	}
}