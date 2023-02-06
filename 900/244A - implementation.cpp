// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	vector<int> a(k);

	map<int,int> m;

	for (int i=1;i<=n*k;i++) m[i] = 0;
	for (int i=0;i<k;i++) {
		cin >> a[i];
		m[a[i]]=i+1;
	}
	for (int i=0;i<k;i++) {
		int tally = n-1;
		for (auto [k,v] : m) {
			if (tally == 0) break;
			if (v == 0) {
				cout << k<< " ";
				m[k] = i+1;tally--; 
			}
		}
		cout << a[i] << '\n';
	}

	//for (auto [k,v] : m ) cout << k << " " << v << '\n';


	return 0;
}

