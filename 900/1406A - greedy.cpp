// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		map<int,int> m; m[n] = 0;

		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x]++;
			if (m[i] > 0) continue;
			m[i] = 0;
		}

		int a , b; bool flag = false;

		for (auto [k,v] : m) {
			if (v == 0) {
				if (flag == true) {
					b = k;
				} else {
					a = k; b = k;
				}
				break;
			}
			if (v == 1 && flag == false) {
				flag = true;
				a = k;
			}
		}
		cout << (a+b) << '\n';
	}

	return 0;
}
