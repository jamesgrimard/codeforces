// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int cnt = 0 , p = 1;
	for (int i=0;i<n;i++) {
		if (a[i] != i) {
			if (a[a[i]] == i) p = 2;
		} else {
			cnt++;
		}
	}

	cout << min(n,cnt+p);

	return 0;
}