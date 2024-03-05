#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[101] = {}; for (int i=0;i<n;i++) {
			int tmp; cin >> tmp;
			a[tmp]++;
		}
		bool flag = 1;
		for (int i=1;i<=100;i++) if (a[i] > a[i-1]) flag = 0;
		(flag) ? cout << "Yes\n" : cout << "No\n";
	}


	return 0;
}