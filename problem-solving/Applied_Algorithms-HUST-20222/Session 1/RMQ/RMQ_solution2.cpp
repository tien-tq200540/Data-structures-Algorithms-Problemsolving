#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6;
const int LOGMAXN = 20;  //log2(MAXN)

int N, m;
int A[MAXN];
int M[MAXN][LOGMAXN];
int start[MAXN], en[MAXN];

void input() {
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	cin >> m;
	
	for (int i = 0; i < m; i++) {
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		
		start[i] = tmp1;
		en[i] = tmp2;
	}
}

void preprocess() {
	int i, j;
	
	for (i = 0; i < N; i++) {
		M[i][0] = i;
	}
	
	for (j = 1; 1 << j <= N; j++) {
		for (i = 0; i + (1 << j) - 1 < N; i++) {
			if (A[M[i][j - 1]] < A[M[i + (1 << (j - 1))][j - 1]]) 
				M[i][j] = M[i][j - 1];
			else
				M[i][j] = M[i + (1 << (j - 1))][j - 1];
		}
	}
}

//Complexity: > O(1), < O(NlogN)
//or = O(NlogN)
int RMQ(int i, int j) {
	int k = floor(log2(j - i + 1));
	
	if (A[M[i][k]] <= A[M[j - (1 << k) + 1][k]]) {
		return A[M[i][k]];
	} else {
		return A[M[j - (1 << k) + 1][k]];
	}
}

int main () {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	input();
	
	preprocess();
	
	long Q = 0;
	
	for (int i = 0; i < m; i++) {
		Q += RMQ(start[i], en[i]);
	}
	
	cout << Q;
    return 0;
}
