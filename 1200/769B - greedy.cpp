// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<pair<int,int>> a(n);
	int cnt = 1;
	for (int i=0;i<n;i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
		cnt += a[i].first;
	}

	if (cnt < n || a[0].first == 0) {
		cout << -1;
		return 0;
	}

	sort(begin(a)+1,end(a),[](auto a, auto b){return a > b;});
	
	cout << n-1 << '\n';
	vector<bool> b(n);
	b[0] = 1;
	for (int i=0;i<n;i++) {
		for (int j=i+1;j<n;j++) {
			if (a[i].first > 0 && b[a[j].second] == 0) {
				b[a[j].second] = 1;
				a[i].first--;
				cout << a[i].second << " " << a[j].second << '\n';
			}
		}
	}

	return 0;	
}

		