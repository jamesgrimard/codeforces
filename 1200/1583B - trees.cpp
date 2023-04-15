// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		vector<bool> A(n+1);
		for (int i=0;i<m;i++) {
			int a , b , c; cin >> a >> b >> c;
			A[b] = 1;
		}
		int middle = 0;
		for (int i=1;i<=n;i++) if (A[i] == 0) middle = i;
		for (int i=1;i<=n;i++) {
			if (i != middle) cout << i << " " << middle << '\n';
		}
		
	}

	return 0;
}