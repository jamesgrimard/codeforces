// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b , k ,m; cin >> a>> b >> k >> m;

	vector<int> A(a) , B(b);

	for (int i=0;i<a;i++) cin >> A[i];
	for (int i=0;i<b;i++) cin >> B[i];

	int last = 0 , t1 = 0 , t2 = 0 , mx = 0;
	
	for (int i=0;i<a;i++) {
		if (t1 < k) {
			t1++; mx = A[i]; continue;
		}
		break;
	}
	for (int i=0;i<b;i++) {
		if (t2 < m && B[i] > mx) {
			t2++; continue;
		}
	}

	(t1 == k && t2 == m) ? cout << "YES" : cout << "NO";

	cout << '\n';

	return 0;
}

