#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "appdev.h"

int main() {
	srand(time(NULL));
	rock r;
	printf("Application Developers ROck!\n");
	printf("Enter Rockers name: ");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	r.max = rand() % 50 + 51;
	r.min = -1 * rand() % 50 + 1;
	send_data(r);
	printf("Rockn'Roll\n");
	return 0;

}