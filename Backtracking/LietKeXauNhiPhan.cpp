#include <iostream>
#define MAX 1000

using namespace std;

// Liet ke tat ca cac xau nhi phan co do dai n

int n;
int a[MAX];

void solution() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void Try(int k) {
	for (int i = 0; i <= 1; i++) {
		a[k] = i;
		if (k == n) solution();
		else Try(k+1);
	}
}

int main () {
    cout << "Nhap do dai cua xau nhi phan: n = ";
    cin >> n;
    cout << "Liet ke cac xau nhi phan co do dai bang " << n << " la: " << endl;
    Try(1);
	return 0;
}
