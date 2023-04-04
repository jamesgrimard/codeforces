// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n , k; cin >> n >> k;
	int total = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		int cnt = 0;
		while (x >= k && cnt < 3) {
			x -= k;
			cnt++;
		}
		total += x;
	}
	
	cout << total;

	return 0;
}
