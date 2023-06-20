#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		} else {
			printf("%lf", -c/b);	
		}
	} else {
		double denta = pow(b, 2) - 4 * a * c;
		if (denta > 0) {
			printf("%lf %lf", (-b + sqrt(denta))/(2 * a), (-b - sqrt(denta))/(2 * a));
		} else if (denta == 0) {
			printf("%lf", -b/(2 * a));
		} else {
			printf("%lf+%lfi\n%lf-%lfi", -b/(2 * a), sqrt(-denta)/(2 * a), -b/(2 * a), sqrt(-denta)/(2 * a));
		}
	}
	return 0;
}
