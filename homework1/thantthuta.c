#include <stdio.h>

int main(void) {
	int sum = 0;
	for (int i = 1000; i < 2000; i++) {
		if (i % 2 == 0) continue;
		sum += i;
	}
	printf("Sum: %d\n", sum);
	return 0;
}