// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		string s; cin >> s;
		vector<int> b,r;
		for (int i=0;i<n;i++) {
			(s[i] == 'B') ? b.push_back(a[i]) : r.push_back(a[i]);
		}
		sort(begin(b),end(b)) , sort(rbegin(r),rend(r));
		bool ans = 1;
		for (int i=0;i<b.size();i++) if (b[i] < i + 1) ans = 0;
		for (int i=0;i<r.size();i++) if (r[i] > n-i) ans = 0;
		ans == 1? cout << "YES\n" : cout << "NO\n";
		
	}

	return 0;	
}