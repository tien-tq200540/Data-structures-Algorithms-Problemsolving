#include <bits/stdc++.h>
using namespace std;

//Given an integers sequence a = (a1, a2, ..., an).
//A subsequence of a like a(i, j) is define to be ai, ai+1, ..., aj
//The weight of a subsequence is the sum of its elements
//Find the subsequence having the highest weight
/*
- Input format:
	+ Line 1 contains n (1 <= n <= 10^6)
	+ Line 2 contains a1, a2, ..., an (-500 <= ai << 500)
*/
int n;

int A[1001]; //our array will start with index = 1
int iMem[1001]; //for Tracing MaxSubsequence
bool bMark[1001];

int max(int a, int b) {
	return (a > b) ? a : b;
}

int MaxSum(int i) {
	if (i == 1) {
		iMem[1] = A[1];
		bMark[1] = true;
		return iMem[1];
	}
	
	if (bMark[i]) return iMem[i];
	
	iMem[i] = max(A[i], A[i] + MaxSum(i-1));
	bMark[i] = true;
	return iMem[i];
}

// Tracing with recursive
void Trace(int i) {
	if (i != 1 && (iMem[i] == A[i] + iMem[i-1])) {
		Trace(i - 1);
	}
	
	cout << A[i] << " ";
}

int main() {
	memset(bMark, 0, sizeof(bMark));

	freopen("INP.txt", "r", stdin);
	
	cin >> n;
	
	int i;
	for (i = 1; i <= n; i++) {
		cin >> A[i];
	}
	
	int ans = MaxSum(n);
	int pos;
	
	for (i = 1; i <= n; i++) {
		ans = max(ans, iMem[i]);
		if (ans == iMem[i]) pos = i;
	}

	cout << ans << endl << pos << endl;
	
	Trace(pos);
	cout << endl;
	
	// Tracing with loop
	int first = pos, last = pos, sum = A[first];
	while (sum != ans) {
		first--;
		sum += A[first];
	}
	cout << first << " " << last;
	return 0;
}
