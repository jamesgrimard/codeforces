// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int mx = 0;

	for (int i=0;i<n;i++){
		pair<int,int> p;
		cin >> p.first >> p.second;
		while (p.first <= mx) {
			p.first += p.second;
		}
		mx = p.first;
	}

	cout << mx;


	return 0;
}

