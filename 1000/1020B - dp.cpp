// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) {
		vector<bool> b(n);
		int p = i+1;
		while (1) {
			if (b[p-1] == 1) {
				cout << p << " "; 
				break;
			}
			b[p-1] = 1;
			p = a[p-1];
		}
	}


	return 0;
}



