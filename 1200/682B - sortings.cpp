// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n+1);
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(begin(a),end(a));
	int p = 1;
	for (int i=1;i<=n;i++) {
		if (a[i] >= p) p++;
	}
	cout << p;
	return 0;	
}

		