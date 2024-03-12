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
		bool flag = 1 , flag2 = 0 , ans = 1;
		for (int i=0;i<n/2;i++) {
			if (s[i] != s[n-1-i] && flag2 == 1) ans = 0;
			if (s[i] != s[n-1-i] && flag == 1) flag = 0;
			if (s[i] == s[n-1-i] && flag == 0) flag2 = 1;
		}
		(ans) ? cout << "YES\n" : cout << "NO\n";
				                                                 
	}

	return 0;
}