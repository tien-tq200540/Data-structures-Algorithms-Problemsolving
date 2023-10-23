#include <iostream>
#include <cstring>
#define MAX 1000
using namespace std;

//Recursive: O(2^n)
int Fib1(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return Fib1(n-1) + Fib1(n-2);
}

//Recursive with memory:
//Time: O(n), Memory: O(n)
int iMem[MAX];
int Fib2(int n) {
	if (n == 0 || n == 1) return n;
	if (iMem[n] != -1) return iMem[n];
	iMem[n] = Fib2(n-1) + Fib2(n-2);
	return iMem[n];
}

int main() {
	memset(iMem, -1, sizeof(iMem));
	cout << Fib1(5) << " " << Fib2(5);
	return 0;
}
