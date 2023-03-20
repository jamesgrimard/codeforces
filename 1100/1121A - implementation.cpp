// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m , k; cin >> n >> m >> k;
	vector<int> a(n) , b(n);
	map<int,int> M;
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	for (int i=0;i<n;i++) {
		cin >> b[i];
	}
	for (int i=0;i<n;i++) {
		if (a[i] > M[b[i]]) M[b[i]] = a[i];
	}	
	int cnt = 0;
	for (int i=0;i<k;i++) {
		int x; cin >> x;
		if (M[b[x-1]] != a[x-1]) cnt++;
	}
	cout << cnt << '\n';

	return 0;
}

