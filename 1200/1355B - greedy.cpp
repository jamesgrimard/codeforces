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
		sort(begin(a),end(a));
		int cnt = 1 , tally = 0;
		for (int i=0;i<n;i++) {
			if (a[i] == cnt) {
				tally++; 
				cnt = 0;
			}
			cnt++;
		}
		cout << tally << '\n';
	}

	return 0;
}