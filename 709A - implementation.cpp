// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , b, d;
	cin >> n >> b >> d;

	int ans = 0, sum = 0;
	for (int i=0;i<n;i++){
		int x;
		cin >> x;
		if (sum > d) {
			ans++;
			sum = 0;
		}
		if (x <= b) {
			sum += x;
		}
	}
	if (sum > d) ans++;
	cout << ans << '\n';

	return 0;
}