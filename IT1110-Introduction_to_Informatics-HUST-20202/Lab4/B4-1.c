#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 8 || n < 0) printf("ERROR");
	else {
		int res = 1;
		for (int i = 2; i <= n; i++) res *= i;
		printf("%d", res);
	}
	return 0;
}
