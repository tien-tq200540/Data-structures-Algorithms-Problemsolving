#include <stdio.h>

int main() {
	double r, M, S, PI = 3.14159;
	scanf("%lf", &r);
	if (r <= 0) printf("ERROR");
	else {
		M = 2 * PI * r;
		S = PI * PI * r;
		printf("%lf\n%lf", M, S);
	}
	return 0;
}
