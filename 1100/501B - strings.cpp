// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	map<string,bool> used;
	map<string,string> m;
	int cnt = 0;
	for (int i=0;i<n;i++) {
		string a,b; cin >> a >> b;
		if (used[b] == 0) {
			for (auto [k,v] : m) {
				if (v == a) {
					m[k] = b;
					goto out;
				}
			}
			m[a] = b;
			cnt++;
		}
		out: used[a] = 1; 
		used[b] = 1;
	}

	cout << cnt << '\n';

	for (auto [k,v] : m) cout << k << " " << v << '\n';

	return 0;
}

