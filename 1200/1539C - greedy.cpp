// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k , x; cin >> n >> k >> x;
	vector<long long> a(n),b;
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=1;i<n;i++) {
		if (a[i] - a[i-1] > x) {
			long long tmp = (a[i] - a[i-1]) / x;
			if ((a[i]-a[i-1])%x != 0) tmp++;
			b.push_back(tmp - 1LL);
		}
	}
	sort(begin(b),end(b));
	int N = b.size() + 1;
	for (int i=0;i<b.size();i++) {
		if (k - b[i] < 0) break;
		N--;
		k -= b[i];
	}
	cout << N << '\n';
	
	return 0;
}