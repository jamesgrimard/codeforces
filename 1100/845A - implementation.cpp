// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n*2);
	for (int i=0;i<n*2;i++) cin >> a[i];
	sort(rbegin(a),rend(a));


	(a[n-1] != a[n]) ? cout << "YES\n" : cout << "NO\n";

	return 0;
		
}

