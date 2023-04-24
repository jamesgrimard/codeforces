// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n,x; cin >> n >> x;
		int cnt = 0,cnt2 = 0;
		for (int i=0;i<n;i++) {
			int X;cin >> X;
			(X%2)?cnt++:cnt2++;
		}
		if (cnt >= x) cnt = x;
		if (cnt % 2 == 0 && cnt > 0) cnt--;
		(cnt != 0 && cnt + cnt2 >= x) ? cout << "Yes\n" : cout << "No\n";

	}

	return 0;
}