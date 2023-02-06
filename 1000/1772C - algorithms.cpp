// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int k , n; cin >> k >> n;

		vector<int> a = {n};
		int count = 1;
		for (int i=n-1;i>=1;i--) {
			if (size(a) < k && n-(count*count+count)/2 >=1) {
				a.push_back(n-(count*count+count)/2); count++;
			}
		}

		int tally = k - size(a);

		for (int i=1;i<=n;i++) {
			if (tally > 0) {
				bool flag = 0;
				for (int j=0;j<size(a);j++) {
					if (a[j] == i) flag = 1; 
				}
				if (flag == 0) {
					a.push_back(i); tally--;
				}
			}
		}

		sort(begin(a),end(a));

		for (int i=0;i<size(a);i++) cout << a[i] << " ";
		cout << '\n';
	}

	return 0;
}

