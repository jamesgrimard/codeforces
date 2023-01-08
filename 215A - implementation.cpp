// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	vector<int> a(n);

	map<int,int> M;

	for (int i=0;i<n;i++) cin >> a[i];

	int m; cin >> m;

	for (int i=0;i<m;i++) {
		int x; cin>>x;
		for (int j=0;j<n;j++) {
			if (x % a[j] == 0) M[x/a[j]]++;
		}
	}

	auto ans = M.end();
	ans--;
	cout << ans->second;




	return 0;
}

