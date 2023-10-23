#include <iostream>

using namespace std;

int main() {
	int T; cin >> T;
	int iProfit[4];
	for (int a0 = 1; a0 <= T; a0++) {
		//read input
		for (int i = 0; i < 4; i++) cin >> iProfit[i];
		
		int sum_negative_profit = 0;
		//sort Profit
		for (int i = 0; i < 3; i++) {
			for (int j = i+1; j < 4; j++) {
				if (iProfit[i] > iProfit[j]) {
					int tmp = iProfit[i];
					iProfit[i] = iProfit[j];
					iProfit[j] = tmp;
				}
			}
		}
		
		//check negative profit and add sum
		if (iProfit[0] < 0) sum_negative_profit += iProfit[0];
		if (iProfit[1] < 0) sum_negative_profit += iProfit[1];
		cout << sum_negative_profit << endl;
	}	
	return 0;
}
