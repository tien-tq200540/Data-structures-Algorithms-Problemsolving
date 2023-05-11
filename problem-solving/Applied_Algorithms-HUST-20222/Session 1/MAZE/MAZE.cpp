#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int n, m, r, c;
int a[MAX][MAX];
// Below arrays detail all four possible movements from a cell
int row[] = { -1, 0, 0, 1 };
int col[] = { 0, -1, 1, 0 };
bool visited[MAX][MAX];
int minPath = INT_MAX;
int curPathLength = 0;

typedef struct Point {
	int row;
	int col;
	int value;
} P;

void input() {
	cin >> n >> m >> r >> c;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			visited[i][j] = false;
		}
	}
}

void printMaze() {
	cout << n << " " << m << " " << r << " " << c << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

bool isValid(int row, int col, int value) {
	return (row >= 0 && row < n) && (col >= 0 && col < m) && (value == 0) && (!visited[row][col]);
}

void BFS(int i, int j) {
	if (n <= 1 && m <= 1 && a[0][0] == 1) {
		minPath = -1;
		return;
	}
	
	queue<P> Q;
	
	Q.push({i, j, 0});
	visited[i][j] = true;
	
	while (!Q.empty()) {
		P curP = Q.front();
		Q.pop();
		
		if (isValid(curP.row, curP.col, curP.value) && (curP.row == n-1 || curP.col == m-1)) {
			curPathLength += 1;
			
			if (minPath > curPathLength) minPath = curPathLength;
			
			curPathLength -= 1;
		}
		
		for (int k = 0; k < 4; k++) {
			if (isValid(i + row[k], j + col[k], a[i + row[k]][j + col[k]])) {
				//enqueue next cell
                Q.push({ i + row[k], j + col[k], a[i + row[k]][j + col[k]]});
			}
		}
	}
}

void MAZE(int i, int j) {
	
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	freopen("INP.txt", "r", stdin);
	
	input();
	//printMaze();
	BFS(r, c);
	//MAZE(r, c);
	
	cout << minPath;
	
	return 0;
}
