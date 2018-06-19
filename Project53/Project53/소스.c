#include <stdio.h>
#define LIMIT 4
int global;

void sub(void);

int main(void)
{
	int i;
	static int static_count = 4;
	int auto_count = 0;
	int *pi = &static_count;

	//4

	global = 3;
	for (i = 0; i < LIMIT; i++) {
		++auto_count;
		static_count--;
		++global;
		sub();
	}
	//5 ½ÃÀÛ
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
	printf("global=%d\n", global);
	printf("*pi=%d\n", *pi);
	//5 ³¡
	return 0;
}

void sub(void)
{
	int auto_count = 3;
	static int static_count = 2;

	auto_count++;
	static_count = static_count + 1;
	global++;
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
	printf("global=%d\n", global);
}
