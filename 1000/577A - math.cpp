// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n, k; cin >> n >> k;
	int N = n;
	int cnt = 0;
	while (n > 0) {
		if (k % n == 0) {
			if (k / n <= N) {
				cnt++;
			} else {
				break;
			}
		}
		n--;
	}
	cout << cnt;

	return 0;
}



