// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<int,int> M;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		M[x] = i + 1 ;
	}
	long long a = 0 , b = 0;
	int m; cin >> m;
	for (int i=0;i<m;i++) {
		int x; cin >> x;
		a += M[x];
		b += (n - M[x] + 1);
	}

	cout << a << " " << b;

	return 0;
}
