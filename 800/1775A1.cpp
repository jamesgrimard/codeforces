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
		string s; cin >> s;
		int n = s.size();
		cout << s[0] << " ";
		for (int i=1;i<n;i++) {
			cout << s[i];
			if (i == 1 && s[1] == 'a') cout << " ";
			if (s[1] == 'b' && i == n-2) cout << " ";
		}
		cout << '\n';		




	}

 	return 0;
}