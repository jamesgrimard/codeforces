// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int count = 1;
		string a,b; cin >> a >> b;

		map<char,int> A,B;
		for (int i=0;i<size(a);i++) A[a[i]]++;
		for (int i=0;i<size(b);i++) B[b[i]]++;

		if (size(b) > 1 && B['a'] > 0) {
			cout << -1;
		} else if (size(b) == 1 && B['a'] == 1) {
			cout << 1;
		} else {
			long long k = pow(2,size(a));
			cout << k;
		}
		cout << '\n';
	}






	return 0;
}
