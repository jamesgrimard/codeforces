// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	
	vector<int> a; map<int,bool>m;

	for (int i=0;i<n;i++) {
		int x; cin >> x; m[x] = 1;
		bool flag = 0;
		for (int j=size(a)-1;j>=max(0,(int)size(a)-k);j--) {
			if (a[j] == x) {flag = 1; break;}
		}
		if (flag == 0) a.push_back(x);
	}

	cout << min((int)size(m),k) << '\n';
	for (int i=size(a)-1;i>=max((int)size(a)-k,0);i--) cout << a[i] << " ";

	return 0;
}


