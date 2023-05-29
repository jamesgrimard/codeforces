// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<string> a(n),b(n);
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) cin >> b[i];
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (b[i] == a[j]) {
				b[i] = "-";
				a[j] = "-";
				break;
			}
		}
	}
	sort(begin(a),end(a));
	sort(begin(b),end(b));
	int cnt = 0;
	for (int i=0;i<n;i++) {
		if (a[i] != b[i]) cnt++;
	}
	cout << cnt << '\n';

	return 0;	
}