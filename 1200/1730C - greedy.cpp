// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s ; cin >> s;
		int n = s.size();
		char mn = s[n-1];
		for (int i=n-2;i>=0;i--) {
			if (s[i] < mn) mn = s[i];
			if (s[i] > mn) s[i] = min(s[i]-'0'+1+48,57);
		}
		sort(begin(s),end(s));
		cout << s << '\n';
	}

	return 0;
}