// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >>tt;
	while (tt--) {
		int n , a,  b; cin >> n >> a >> b;
		string s; cin >> s;
		int sum = 0;
		if (b < 0) {
			int count = 0;
			for (int i=1;i<size(s);i++) {
				if (s[i] != s[i-1]) {
					count++; s.erase(i,1); i--;
					if (i != size(s)-1) continue;
				}
				if ((s[i] == s[i-1] || i >= size(s)-1) && count > 0) {
					sum += (count*a+b);
					count = 0;
				}
				//cout << s << '\n';
			}
			if (size(s) > 0) sum += (size(s)*a+b);
		} else {
			sum += (a+b)*n;
		}
		cout << sum << '\n';
	}


	return 0;
}
