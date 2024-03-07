//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int e = 1e9;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		sort(s.begin(),s.end());
		if (s[0] == s[3]) {
			cout << -1 << '\n';
		} else if (s[0] == s[2] || s[3] == s[1]) {
			cout << 6 << '\n';
		} else {
			cout << 4 << '\n';
		}
	}		


  return 0;
}

