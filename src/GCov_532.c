//============================================================================
// Author      : Timesys
// Description : Gcov sample code, Ansi-style
//============================================================================
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, total;

	total = 0;

	for (i = 0; i < 10; i++)
		total += i;

	if (total != 45)
		printf("Failure\n");
	else
		printf("Success\n");

	return 0;
}
