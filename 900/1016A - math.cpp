// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m ; cin >> n >> m;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	int pages_left = 0;

	for (int i=0;i<n;i++) {
		int pages = 0;
		pages += (a[i]+pages_left)/m;
		pages_left = (pages_left+a[i]) % m;
		cout << pages << " ";
	}

	return 0;
}

