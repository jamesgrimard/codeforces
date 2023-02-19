// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int cnt = 0;
	while (size(s) > 1) {
		int sum = 0;
		for (int i=0;i<size(s);i++) {
			sum += (s[i] - '0');
		}
		s = to_string(sum);
		cnt++;
	}
	cout << cnt;

	return 0;
}

