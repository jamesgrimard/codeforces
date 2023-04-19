// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	vector<int> a(2*n+1);
	for (int i=1;i<=2*n;i++) cin >> a[i];
	int cycle = (n%2) ? 2*n : 4 , pos = -1;
	for (int i=0;i<cycle;i++) {
		if (is_sorted(begin(a),end(a))) {
			pos = i;
			break;
		}
		if (i%2) for (int i=1;i<=n;i++) swap(a[i],a[i+n]);
		if (i%2==0) for (int i=1;i<=2*n;i+=2) swap(a[i],a[i+1]);
	}
	cout << min(pos,cycle-pos) << '\n';

	return 0;
}