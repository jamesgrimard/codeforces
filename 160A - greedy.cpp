// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	// 1 2 3 4 5

	int tt,sum(0);
	cin >> tt;

	vector<int> a(tt);
	for(int i=0;i<tt;i++){
		cin >> a[i];
		sum += a[i];
	}

	sort(a.rbegin(),a.rend());

	int count(0);
	for (int i=0;i<tt;i++){
		count += a[i];
		if (count > (sum - count)) {
			cout << (i+1) << endl;
			return 0;
		}
	}

	return 0;
}