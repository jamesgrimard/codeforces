// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k;
	cin >> k;

	vector<int> a(12);
	for (int i=0;i<12;i++){
		cin >> a[i];
	}

	if (k == 0){
		cout << 0;
		return 0;
	}

	sort(a.begin(),a.end());

	int sum = 0;
	for (int i=11;i>=0;i--){
		sum += a[i];
		if (sum >= k) {
			cout << (12 - i);
			return 0;
		}
	}

	cout << -1;

	return 0;
}

