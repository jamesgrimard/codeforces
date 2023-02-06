// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;

	vector<int> a(n) ,A;

	for (int i=0;i<n;i++) cin >> a[i];

	sort(begin(a),end(a));

	A.push_back(a[0]);

	for (int i=1;i<n;i++) {
		if (a[i] != A[size(A)-1]) A.push_back(a[i]);
	}

	bool ans = 0;
	if (size(A) >=3) {
		for (int i=0;i<size(A)-2;i++) {
			if (A[i+2]-A[i] == 2) ans = 1;
		}
	}
	

	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}

