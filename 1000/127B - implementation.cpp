// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	vector<int> a(101);
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x]++;
	}
	int sum = 0;
	for (int i=1;i<=100;i++) {
		if (a[i] < 2) continue;
		for (int j=1;j<=100;j++) {
			if (i == j || a[j] < 2) continue;
			sum++;
			a[i] -= 2; a[j] -= 2;
			if (a[i] < 2) break;
		}
	}
	for (int i=1;i<=100;i++) sum += a[i]/4;

	cout << sum << '\n';

	return 0;
}



