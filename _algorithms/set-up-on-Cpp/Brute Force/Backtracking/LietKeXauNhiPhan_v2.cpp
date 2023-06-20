#include <iostream>
#define MAX 1000

using namespace std;

/* Liet ke tat ca cac xau nhi phan co do dai n thoa man 1 trong 2 dieu kien:
- Khong co hai chu so 0 bat ki dung canh nhau
- Khong co hai chu so 1 bat ki dung canh nhau
*/
int n;
int a[MAX];

void solution() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void Try_dif0(int k) {
	a[0] = 1;
	for (int i = 0; i <= 1; i++) {
		a[k] = i;
		if (i == 0) {
			if (a[k-1] == 0) continue;
			else {
				if (k == n) solution();
				else Try_dif0(k+1);
			}
		} else {
			if (k == n) solution();
			else Try_dif0(k+1);
		}
	}
}

void Try_dif1(int k) {
	a[0] = 0;
	for (int i = 0; i <= 1; i++) {
		a[k] = i;
		if (i == 1) {
			if (a[k-1] == 1) continue;
			else {
				if (k == n) solution();
				else Try_dif1(k+1);
			}
		} else {
			if (k == n) solution();
			else Try_dif1(k+1);
		}
	}
}

int main () {
    cout << "Nhap do dai cua xau nhi phan: n = ";
    cin >> n;
    cout << "Chon dieu kien liet ke xau nhi phan" << endl;
	cout << "\t 1. Khong co hai chu so 0 bat ki dung canh nhau." << endl;
	cout << "\t 2. Khong co hai chu so 1 bat ki dung canh nhau." << endl;
	
	int chon;
	do {
		cin >> chon;
		if ((chon > 2) || (chon < 1)) cout << "Khong ton tai chuc nang! Hay chon lai!" << endl;
	} while ((chon > 2) || (chon < 1));
	
    cout << "Liet ke cac xau nhi phan co do dai bang " << n << " thoa man dieu kien la: " << endl;
    switch (chon) {
    	case 1: {
    		Try_dif0(1);
			break;
		}
		case 2: {
			Try_dif1(1);
			break;
		}
	}
	return 0;
}
