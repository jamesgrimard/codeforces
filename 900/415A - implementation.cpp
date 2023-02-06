// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;

	vector<int> a(n);

	for (int i=0;i<m;i++){
		int x; cin >> x;
		for (int j=x-1;j<n;j++) {
			if (a[j] == 0) a[j] = x;
		}
	}

	for (int i=0;i<n;i++) cout << a[i] << " ";

	return 0;
}

