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
		if (s == "()") {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			bool f = 1;
			for (int i=0;i<n-1;i++) {
				if (s[i] == ')' && s[i+1] == '(') f = 0;
			}
			if (f) {
				for (int i=0;i<n;i++) cout << "()";
			} else {
				for (int i=0;i<2*n;i++) (i < n) ? cout << "(" : cout << ")";
			}
			cout << '\n';
		}
	}



  
  return 0;
}