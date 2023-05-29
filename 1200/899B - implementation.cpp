// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<int> a = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};

	int n; cin >> n;
	vector<int> r(n);
	for (int i=0;i<n;i++) cin >> r[i];
	bool ans = 0;
	for (int i=0;i<a.size()-n;i++) {
		for (int j=0;j<n;j++) {
			if (a[i+j] != r[j]) break;
			if (j == n-1) ans = 1;
		}
	}
	ans == 1 ? cout << "Yes\n" : cout << "No\n";
	return 0;	
}

		