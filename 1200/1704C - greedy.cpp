// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		vector<int> a(m),b(m);
		for (int i=0;i<m;i++) cin >> a[i];
		sort(begin(a),end(a));
		for (int i=1;i<m;i++) {
			b[i] = a[i] - a[i-1] - 1;
		}
		b[0] = a[0] - 1 + (n - a[m-1]);
		long long sum = 0;
		sort(rbegin(b),rend(b));
		for (int i=0;i<m;i++) {
			if (b[i] - (i * 4 +1) == 0) {
				sum++;
			} else if (b[i] - (i * 4 + 1) > 0) {
				sum += (b[i] - (i*4+1));
			} else {
				break;
			}
		}
		cout << n - sum << '\n';
	}

	return 0;
}