// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x]++;
		}
		int cnt = 0;
		for (auto i=m.rbegin();i!=m.rend();i++) {
			if (i->second > 0 && i->first % 2 == 0) {
				m[i->first/2]++;
				cnt++;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}