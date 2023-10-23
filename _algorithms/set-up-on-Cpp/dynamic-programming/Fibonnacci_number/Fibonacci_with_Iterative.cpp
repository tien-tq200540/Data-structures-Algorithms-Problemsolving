#include <iostream>
#define MAX 1000
using namespace std;

int iRes[MAX];
//Iterative:
//Time: O(n), Memory: O(n)
int Fib3(int n) {
	if (n <= 1) return n;
	iRes[0] = 0; iRes[1] = 1;
	for (int i = 2; i <= n; i++) iRes[i] = iRes[i-1] + iRes[i-2];
	return iRes[n];
}

//Iterative:
//Time: O(n), Memory: O(1)
int Fib4(int n) {
	if (n <= 1) return n;
	int first = 0, second = 1;
	int tmp;
	for (int i = 2; i <= n; i++) {
		tmp = second;
		second = first + second;
		first = tmp;
	}
	return second;
}

int main() {
	cout << Fib3(5) << " " << Fib4(5);
	return 0;
}
