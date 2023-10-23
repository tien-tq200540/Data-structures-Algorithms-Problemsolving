#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int sub_seq_max = INT_MIN;
	//Complexity: O(n^2)
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum = sum + arr[j];
			if (sum > sub_seq_max) sub_seq_max = sum;
		}
	}
	cout << sub_seq_max;
	return 0;
}
