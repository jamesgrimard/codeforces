// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;

		vector<int> tmp(n);
		for (int i=0;i<n;i++) cin >> tmp[i];
		
		vector<vector<int>> a;

		a.push_back(tmp);

		int step = 0;
		while (1) {
			bool f = 0;
			vector<int> count(n+1);
			for (int i=0;i<n;i++) count[a[step][i]]++;
			vector<int> tmp2(n);
			for (int i=0;i<n;i++) {
				if (a[step][i] != count[a[step][i]]) f = 1;
				tmp2[i] = count[a[step][i]];
			}
			a.push_back(tmp2);
			step++;
			if (f == 0) break;
		}
		int k; cin >> k;
		for (int i=0;i<k;i++) {
			int I,J; cin >> I >> J;
			cout << a[min((int)size(a)-1,J)][I-1] << '\n';
		}
	}

	return 0;
}

