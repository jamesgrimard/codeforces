// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int k; cin >> k;
		int a = (s[0]-'0') * 10 + (s[1]-'0'), b = (s[3]-'0') * 10 + (s[4]-'0'), count = 1500;
		map<string,int> m;
		while (count > 0) {
			count--;
			b += k;
			int c = b / 60;
			b %= 60;
			a += c; a %= 24;
			string hh = to_string(a) , mm = to_string(b);
			if (size(hh) == 1) hh = "0" + hh;
			if (size(mm) == 1) mm = "0" + mm;
			if (hh[0] == mm[1] && hh[1] == mm[0]) m[hh+mm]++;
		}
		
		cout << size(m) << '\n';
	}

	return 0;
}

