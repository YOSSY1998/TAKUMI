#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double x;
	printf("Input x:");
	scanf("%lf", &x);
	if (x > 0)
		printf("|x|=%f\n", x);
	else
		printf("|x|=%f\n", -x);
	return 0;
}