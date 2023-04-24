// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		vector<string> s(n+1);
		for (int i=0;i<n+1;i++) {
			for (int j=1;j<=200;j++) s[i] += 'a';
		}
		for (int i=0;i<n;i++) {
			for (int j=i+1;j<n+1;j++) {
				s[j][a[i]] = char(((s[i][a[i]]-'a' + 1)%26)+97);
			}
		}	
		
		for (auto v:s) cout << v << '\n';
	}

	return 0;
}