//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {
	
	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		s = "0" + s;
		int n = s.size() , I = -1;
		bool a[n] = {};
		for (int i=n-1;i>=1;i--) {
			if (s[i] >= '5') a[i] = 1;
			if (s[i] == '4' && i < n - 1 && a[i+1] == 1) a[i] = 1;
			if (a[i]) I = i;
		}
		if (I == -1) {
			for (int i=1;i<n;i++) cout << s[i];
			cout << '\n';
		} else {
			for (int i=0;i<n;i++) {
				if (i+1 == I) {
					cout << char(s[i] + 1);
				} else {
					if (i == 0) continue;
					(i >= I) ? cout << 0 : cout << s[i];
				}
			}
			cout << '\n';
		}
	}				


}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
