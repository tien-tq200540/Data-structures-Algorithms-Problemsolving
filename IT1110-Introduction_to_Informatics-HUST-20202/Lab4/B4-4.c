#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a <= 0 || b <= 0) printf("ERROR");
	else {
		int ucln, bcnn;
		bcnn = a * b;
		while (a != b) {
			if (a > b) a = a - b;
			else b = b - a;
		}
		ucln = a;
		bcnn = bcnn/ucln;
		printf("%d\n%d", ucln, bcnn);
	}
	return 0;
}
