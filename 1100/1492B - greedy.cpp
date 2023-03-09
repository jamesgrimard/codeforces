// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),b;
		int mx = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] > mx) {
				mx = a[i];
				b.push_back(i);
			}
		}
		b.push_back(n);
		for (int i=size(b)-2;i>=0;i--) {
			for (int j=b[i];j<b[i+1];j++) cout << a[j] << " ";
		}
		
		cout << '\n';
	}

	return 0;
}

