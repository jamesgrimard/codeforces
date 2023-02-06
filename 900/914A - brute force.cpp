// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isComposite(int x) {
	float k = x;
	k = sqrt(k);
	if ((int) k == k) {
		return true;
	} 
	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	sort(begin(a),end(a));

	for (int i=n-1;i>=0;i--) {
		if (isComposite(a[i]) == 0) {
			cout << a[i]; break;
		}
	}


	return 0;
}

