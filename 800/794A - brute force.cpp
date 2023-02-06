// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x,l,r,n;
	cin >> x >> l >> r >> n;

	int sum(0);
	for (int i=0;i<n;i++) {
		int tmp;
		cin >> tmp;
		if ((tmp > l) && (tmp < r)) sum++;
	}

	cout << sum << '\n';

	return 0;
}