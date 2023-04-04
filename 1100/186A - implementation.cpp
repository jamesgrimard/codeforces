// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a , b; cin >> a >> b;

	if (a == b) {
		cout << "YES\n";
	} else if (a.size() != b.size()) {
		cout << "NO\n";
	} else {
		vector<int> A;
		for (int i=0;i<a.size();i++) {
			if (a[i] != b[i]) {
				A.push_back(a[i]);
				A.push_back(b[i]);
			}
		}
		if (A.size() != 4) {
			cout << "NO\n";
		} else {
			(A[1] == A[2] && A[0] == A[3]) ? cout << "YES\n" : cout << "NO\n";
		}
	}


	return 0;
}
