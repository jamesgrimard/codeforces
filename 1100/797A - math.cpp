// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	int N = max(sqrt(n),(double)n);
	vector<int> a(N+1);
	int total = 0;
	for (int i=2;i<=N;i++) {
		int cnt = 0;
		while (n % i == 0) {
			cnt++;
			n /= i;
		}
		a[i] = cnt;
		total += cnt;
	}

	

	if (total >= k) {
		int p = 1;
		for (int i=2;i<size(a);i++) {
			while (a[i] > 0 && k > 1) {
				cout << i << " ";
				k--;
				a[i]--;
			}
			if (k == 1) p *= (pow(i,a[i]));
		}
		cout << p;
	} else {
		cout << -1;
	}


	return 0;
}

