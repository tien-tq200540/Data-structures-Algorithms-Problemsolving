#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6;

int N, M;
int A[MAXN];
long Q;

// Solution Complexity: O(M*N)

// RMQ Complexity: O(N)
int RMQ(int i, int j) {
	int min = A[i];
	for (int count = i+1; count <= j; count++) {
		if (min > A[count]) min = A[count];
	}
	
	return min;
}

int main () {
	cin >> N;
	
	for (int index = 0; index < N; index++) {
		cin >> A[index];
	}
	
	cin >> M;
	
	for (int index = 1; index <= M; index++) {
		int i, j;
		cin >> i >> j;
		
		Q += RMQ(i, j);
	}
	
	cout << Q;
    return 0;
}
