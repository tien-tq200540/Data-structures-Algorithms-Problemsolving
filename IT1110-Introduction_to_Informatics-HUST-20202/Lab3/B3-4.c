#include <stdio.h>
#include <math.h>

int main() {
	double gia_ko_thue, can_nang, thue, gia_co_thue;
	scanf("%lf%lf%lf", &gia_ko_thue, &can_nang, &thue);
	gia_co_thue = gia_ko_thue * can_nang * (1 + thue/100);
	printf("%lf", gia_co_thue);
	return 0;
}
