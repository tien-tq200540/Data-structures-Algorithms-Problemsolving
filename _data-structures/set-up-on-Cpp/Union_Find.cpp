#include <bits/stdc++.h>
using namespace std;

struct Union_Find {
	vector<int> iParent;
	
	Union_Find(int n) {
		iParent = vector<int>(n);
		for (int i = 0; i < n; i++) {
			iParent[i] = i;
		}
	}
	
	//Find
	int Find(int x) {
		if (iParent[x] == x) return x;
		else {
			iParent[x] = Find(iParent[x]);
			return iParent[x];
		}
	}
	
	//Union
	void Union(int x, int y) {
		iParent[Find(x)] = Find(y);
	}
};

int main() {
	int Items[] = {1, 2, 3, 4, 5, 6};
	Union_Find Collections = Union_Find(6);
	Collections.Union(1, 4);
	Collections.Union(3, 5);
	Collections.Union(3, 6);
	for (int i = 1; i <= 6; i++) {
		cout << "Find(" << i << ") = " << Collections.iParent[i] << endl;
	}
	return 0;
}
