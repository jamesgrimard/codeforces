// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int cnt = 0;
	for (int i=1;i<n-1;i++) {
		if (a[i] == 0 && a[i-1] == 1 && a[i+1] == 1) {
			a[i+1] = 0;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}



