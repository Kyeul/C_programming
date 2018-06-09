#include<stdio.h>

int main() {
	int A = 1, Z;	//A¿Í Z ¼±¾ð

	while (1) {
		for (Z = 1; (A + Z) <= 9; Z++)
		{
			if ((A + Z) == 9)
				printf("--------\n<A= %d, Z= %d>\n\n  %d %d\n+ %d %d\n--------\n  %d %d\n\n", A, Z, A, Z, Z, A, (A + Z), (Z + A));
			else
				continue;
		}
		A++;

		if (A > 9)
			break;
	}

}