#include<stdio.h>
#include"struct.h"

int main() {

	struct person arr[3] = {
		{"�̽±�", "010-1234-1234", 21},
		{"������", "010-44242-1245", 22},
		{"������", "010 - 2344 - 2531",19}
	};

	int i;

	for (i = 0; i < 3; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phonenum, arr[i].age);

	return 0;
	


}