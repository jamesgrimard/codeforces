// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1),b(n+1);
		for (int i=2;i<=n;i++) cin >> a[i];
		string s; cin >> s;
		s = '0' + s;
		vector<pair<int,int>> p(n+1);
		int cnt = 0;
		for (int i=n;i>=2;i--) {
			int W = 0 , B = 0 , m = i;
			while (m > 0) {
				if (b[m] == 0) {
					(s[m] == 'W') ? W++ : B++;
				}
				p[m].first += W , p[m].second += B;
				b[m] = 1;
				m = a[m];
			}
		}
		for (int i=1;i<=n;i++) if (p[i].first == p[i].second) cnt++;
		cout << cnt << '\n';
	}


	return 0;	
}