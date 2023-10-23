#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string keyboard[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", " "};
	int T; cin >> T;
	string S;
	cin.ignore();
	for (int a0 = 1; a0 <= T; a0++) {
		getline(cin, S);
		int count = 0;
		for (int i = 0; i < S.length(); i++) {
			for (int j = 0; j < 9; j++) {
				for (int k = 0; k < keyboard[j].length(); k++) {
					if (S[i] == keyboard[j][k]) count = count + k + 1;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}

