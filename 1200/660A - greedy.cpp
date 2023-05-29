// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),b(n),o;
	vector<vector<int>> r(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		b[i] = a[i];
		for (int j=2;j*j<=a[i];j++) {
			if (a[i] % j == 0) {
				r[i].push_back(j);
				while (a[i]%j == 0) a[i]/=j;
			}
		}
		r[i].push_back(a[i]);
	}
	int cnt = 0;
	o.push_back(b[0]);
	for (int i=0;i<n-1;i++) {
		bool f= 0;
		int top = 0 , bottom = 0;
		while (top < r[i].size() && bottom < r[i+1].size() && f == 0) {
			if (r[i][top] == r[i+1][bottom] && r[i][top] != 1) f = 1;			
			(r[i][top] < r[i+1][bottom]) ? top++ : bottom++;
		}
		if (f) {
			o.push_back(1);
			cnt++;
		}
		o.push_back(b[i+1]);
	}
	cout << cnt << '\n';
	for (auto v:o) cout << v <<  " ";

	return 0;	
}

		