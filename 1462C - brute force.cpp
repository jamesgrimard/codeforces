// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int x;
		cin >> x;
		string s;

		if (x > 45) {
			cout << -1; 
			goto out;
		}

		for (int i=9;i>0;i--) {
			char c = '0';
			if (x > i) {
				x -= i;
				s += (c+i);
				continue;
			}
			if (x <= i) {
				s += (c+x);
				break;
			}
		}
		for (int i=(s.size()-1);i>=0;i--) {
			cout << s[i];
		}
		out: cout << '\n';
	}
	return 0;
}

