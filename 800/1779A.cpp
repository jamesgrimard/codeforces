// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int L = 0 , R = 0;
		for (int i=0;i<n;i++) {
			if (s[i] == 'R' && R == 0) R = i + 1;
			if (s[i] == 'L') L = i + 1;
		}
		if (L > R && L > 0 && R > 0) {
			cout << 0 << '\n';
		} else if (R - L == 1 && L > 0) {
			cout << L << '\n';
		} else {
			cout << -1 << '\n';
		}
	}
  	

 	
 	return 0;
}