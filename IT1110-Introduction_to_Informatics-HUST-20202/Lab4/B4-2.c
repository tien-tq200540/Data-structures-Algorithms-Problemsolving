#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n <= 1) printf("Khong phai la so nguyen to");
	else if (n == 2 || n == 3) printf("La so nguyen to");
	else {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				printf("Khong phai la so nguyen to");
				return 0;
			}
		}
		printf("La so nguyen to");
	}
	return 0;
}
