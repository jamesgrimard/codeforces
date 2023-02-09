// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	int mn = 0 , index = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0 || a[i] < mn) {
			mn = a[i];
			index = i +1;
		}
	}
	
	if (n == 1 || (n == 2 && a[0] == a[1])) {
		cout << -1;
		return 0;
	}

	cout << 1 << '\n' << index;



	return 0;
}



