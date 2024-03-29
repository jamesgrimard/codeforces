//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {
	
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		string s; cin >> s;
		if (k%2) {
			string a = "" , b = "";
			for (int i=0;i<n;i++) {
				if (i % 2 == 0) {
					a.push_back(s[i]);
				} else {
					b.push_back(s[i]);
				}
			}
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			for (int i=0;i<n/2;i++) {
				cout << a[i] << b[i];
			}
			if (n&1) cout << a[a.size()-1];		
			cout << '\n';
		} else {
			sort(s.begin(),s.end());
			cout << s << '\n';
		}
	}		

}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
