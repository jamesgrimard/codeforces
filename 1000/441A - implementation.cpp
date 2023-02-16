// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , budget; cin >> n >> budget;
	vector<int> a;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		bool f = 0;
		for (int j=0;j<x;j++) {
			int y; cin >> y;
			if (y < budget) f = 1;
		}
		if (f == 1) a.push_back(i+1);
	}
	cout << size(a) << '\n';
	for (int i=0;i<size(a);i++) cout << a[i] << " ";

	return 0;
}



