#include <stdio.h>

int main() {
	double dtoan, dly, dhoa;
	scanf("%lf%lf%lf", &dtoan, &dly, &dhoa);
	double tong = dtoan + dly + dhoa;
	printf("%lf\n", tong);
	printf("%lf", tong/3);
	return 0;
}
