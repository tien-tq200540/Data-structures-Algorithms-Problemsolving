#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) return 0;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		
		int max_area = 0;
		//Complexity: O(n^2)
		for (int i = 0; i < n; i++) {
			int cur_length_min = a[i];
			for (int j = i; j < n; j++) {
				if (a[j] < cur_length_min) cur_length_min = a[j];
				int cur_area = (j - i + 1) * cur_length_min;
				if (max_area < cur_area) max_area = cur_area;
			}
		}
		cout << "Max_area = " << max_area << endl;
		cout << endl;
	}
	return 0;
}
