// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;
	int cnt = 0;
	for (int i=0;i<n;i++) {
		vector<bool> a(k+1);
		string s; cin >> s;
		for (int j=0;j<s.size();j++) {
			if (s[j]-'0' > k) continue;
			a[s[j]-'0'] = 1;
		}
		for (auto v:a) {
			if (v != 1) goto out;
		}
		cnt++;
		out: continue;
	}

	cout << cnt;


	return 0;
}