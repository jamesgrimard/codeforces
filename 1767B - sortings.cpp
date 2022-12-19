// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		vector<int> a;
		for (int i=0;i<n;i++){
			int x;
			cin >> x;
			if (i == 0 || x > a[0]) a.push_back(x);
		}

		sort(a.begin()+1,a.end());

		for (int i=1;i<a.size();i++){
			if (a[0] < a[i]) {
				int d = a[i] - a[0];
				a[0] += (d / 2);
				if (d % 2 == 1) a[0]++;
			}
		}

		cout << a[0] << '\n';
	}

	return 0;
}