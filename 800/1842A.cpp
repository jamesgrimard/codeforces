#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m ; cin >> n >> m;
		long long sum_a = 0 , sum_b = 0;
		for (int i=0;i<n;i++) {
			int tmp;
			cin >> tmp;
			sum_a += tmp;
		}
		for (int i=0;i<m;i++) {
			int tmp;
			cin >> tmp;
			sum_b += tmp;
		}
		if (sum_a > sum_b) {
			cout << "Tsondu\n";
		} else if (sum_a < sum_b) {
			cout << "Tenzing\n";
		} else {
			cout << "Draw\n";
		}
	}
	


	return 0;
}