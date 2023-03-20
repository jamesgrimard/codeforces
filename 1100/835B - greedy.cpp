// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k; cin >> k;
	string s; cin >> s;
	int sum = 0;
	for (int i=0;i<size(s);i++) sum += (s[i]-'0');
	if (sum >= k) {
		cout << 0;
	} else {
		sort(begin(s),end(s));
		int d = k - sum , cnt = 0;
		for (int i=0;i<size(s);i++) {
			if (d <= 0) {
				break;
			} else {
				d -= (9 - (s[i] - '0'));
				cnt++;
			}
		}
		cout << cnt;
	}

	return 0;
		
}

