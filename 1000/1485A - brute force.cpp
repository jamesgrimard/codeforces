// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int a , b; cin >> a >>b;
		int mn = a+1;
		bool flag = 0;
		if (b == 1) {
			flag = 1;
			b++;
		}
		for (int i=0;i<=9;i++) {
			int A = a , count = i;
			if (flag == 1) count++;
			while (A > 0) {
				count++;
				A /= (b+i);
			}
			mn = min(count,mn);
		}
		cout << mn << '\n';
	}

	return 0;
}
