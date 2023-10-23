#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double x;
	scanf("%d%lf", &n, &x);
	if (n <= 0) printf("ERROR");
	else {
		/*solution 1:
		int i;
		double s1, s2, s3;
		double u = 1;
		s1 = s2 = s3 = 1;
		for (i = 1; i <= n; i++) {
			s1 += pow(x, i);
			s2 += pow(-1, i) * pow(x, i);
			u *= (x/i);
			s3 += u;
		}
		*/
		int i = 1;
		double u1 = 1, u2 = 1, u3 = 1;
		while (i <= n) {
			u1 *= x;
			s1 += u1;
			
			u2 *= (-1) * x;
			s2 += u2;
			
			u3 *= (x/i);
			s3 += u3;
			
			i++;
		}
	}
	return 0;
}
