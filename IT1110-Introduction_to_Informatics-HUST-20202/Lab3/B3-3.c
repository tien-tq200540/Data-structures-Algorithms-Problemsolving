#include <stdio.h>
#include <math.h>

int main() {
	double x, y;
	scanf("%lf%lf", &x, &y);
	double A, B, C;
	A = pow(x, 2) + pow(y, 2);
	B = pow(x + y, 2);
	C = pow(x - y, 2);
	printf("%lf\n%lf\n%lf", A, B, C);
	return 0;
}
