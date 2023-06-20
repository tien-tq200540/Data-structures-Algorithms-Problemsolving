#include <stdio.h>
#include <math.h>

int main() {
	double x, y;
	scanf("%lf%lf", &x, &y);
	double f = 0;
	for (int i = 0; i <= 6; i++) {
		f += pow(x, i) * pow(y, 6 - i);
	}
	printf("%lf", f);
	return 0;
}
