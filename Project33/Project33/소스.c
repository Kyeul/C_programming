#include<stdio.h>

int main() {
	int dan=1;	//단을 올릴 변수
	int num;	//구구단을 계산할 변수

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