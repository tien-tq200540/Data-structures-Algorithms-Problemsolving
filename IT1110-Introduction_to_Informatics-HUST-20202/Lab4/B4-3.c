#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n <= 0 || n >= 1000) printf("ERROR");
	else {
		int sum_of_num = 0;
		while (n > 0) {
			sum_of_num += (n % 10);
			n /= 10;
		}
		printf("%d", sum_of_num);
	}
	return 0;
}
