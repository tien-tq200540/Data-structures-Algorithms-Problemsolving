#include <iostream>
#include <cstring>
#define MAX 1000

using namespace std;

/* Liet ke hoan vi bo n phan tu (1, 2, ..., n)
VD: n = 3: 123, 132, 213, 231, 312, 321
*/

int n;
int a[MAX];
int check[MAX];
int count = 0;

void solution() {
	count++;
	cout << count << ") ";
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void Try(int k) {
	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			a[k] = i;
			check[i] = 1;
			if (k == n) solution();
			else Try(k+1);
			
			check[i] = 0;
		}
	}
}

int main () {
	memset(check, 0, MAX);
	cout << "Nhap n = ";
	cin>> n;
	cout << "Hoan vi cua bo n so (1, 2, ..., "<< n << ") sap xep theo thu tu tu dien la:" << endl; 
	Try(1);
	return 0;
}
