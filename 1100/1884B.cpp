//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		long long sum = 0 , cnt = 0;
		for (int i=n-1;i>=0;i--) {
			if (s[i] == '0') {
				cnt++;
				sum += (n-1-i - cnt + 1);
				cout << sum << " ";
			}
		}
		for (int i=0;i<n-cnt;i++) cout << -1 << " ";
				
		cout << '\n';
	}
}				
		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
