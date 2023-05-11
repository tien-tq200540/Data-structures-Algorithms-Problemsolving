#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> mp;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "call") {
            string from, to, date, from_time, to_time;
            cin >> from >> to >> date >> from_time >> to_time;
            // do something with the data
        }
    }
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "?check_phone_number") {
            bool ok = true;
            for (auto [k, v] : mp) {
                for (char c : k) {
                    if (!isdigit(c)) {
                        ok = false;
                    }
                }
            }
            cout << ok << '\n';
        } else if (s == "?number_calls_from") {
            string phone_number;
            cin >> phone_number;
            cout << mp[phone_number] << '\n';
        } else if (s == "?number_total_calls") {
            int res = 0;
            for (auto [k, v] : mp) {
                res += v;
            }
            cout << res << '\n';
        } else if (s == "?count_time_calls_from") {
            string phone_number;
            cin >> phone_number;
            int res = 0;
            for (auto [k, v] : mp) {
                if (k == phone_number) {
                    res += v;
                }
            }
            cout << res << '\n';
        }
    }
    return 0;
}
