// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool check_log2(int x) {
	return (x & (x-1)) == 0;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n ;cin >> n;
		bool flag = 0;
		for (int i=n-1;i>=1;i--) {
			if (flag == 0 && check_log2(i) == 1) {
				flag = 1;
				cout << i << " " << 0 << " ";
				continue;
			}
			cout << i << " ";
		}
		cout << '\n';
	}


	return 0;
}
