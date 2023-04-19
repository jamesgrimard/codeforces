// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		long long n , m; cin >> n >> m;
		long long ans = 1;
		while (m--) {
			ans = (ans * n) % 1000000007;
		}		
		cout << ans << '\n';
	}

	return 0;
}