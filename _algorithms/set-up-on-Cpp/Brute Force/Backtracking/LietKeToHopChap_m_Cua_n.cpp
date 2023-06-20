#include <iostream>
#define MAX 1000

using namespace std;

//Liet ke cac to hop chap m cua n phan tu {1, 2, ..., n}

int m, n;
int a[MAX];

void solution() {
	for (int i = 1; i <= m; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int k) {
	for (int i = a[k-1] + 1; i <= (n - m + k); i++) {
		a[k] = i;
		if (k == m) solution();
		else Try(k+1);
		
	}
}

int main () {
	do {
		cout << "Nhap n = ";
		cin >> n;
		cout << "Nhap m = ";
		cin >> m;
		if ((m > n) || (m < 0)) cout << "ERROR! Yeu cau nhap dung kieu kien (m > n) || (m < 0)" << endl;
	} while ((m > n) || (m < 0));
	cout << "Cac to hop chap " << m << " cua " << n << " phan tu la:" << endl;
	Try(1);
	return 0;
}
