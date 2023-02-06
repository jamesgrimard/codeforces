// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n+1),b;

	for (int i=2;i<=n;i++) cin >> a[i];

	for (int i=n;i!=0;i=a[i]) b.push_back(i);

	for (int i=size(b)-1;i>=0;i--) cout << b[i] << " ";

	return 0;
}

