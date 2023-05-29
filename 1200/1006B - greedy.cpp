// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<pair<int,int>> a(n),s(k);
	for (int i=0;i<n;i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(rbegin(a),rend(a));
	for (int i=0;i<k;i++) s[i] = a[i];
	sort(begin(s),end(s), [](auto a, auto b) {
		return a.second < b.second;
	});
	int sum = 0;
	for (auto v:s) sum += v.first;
	cout << sum << '\n';
	for (int i=0;i<k;i++) {
		if (i == 0 && k-1 == 0) {
			cout << n;
		} else if (i == 0) {
			cout << s[i].second + 1 << " ";
		} else if (i == k-1) {
			cout << n - (s[i-1].second+1) << " ";
		} else {
			cout << s[i].second - s[i-1].second << " ";
		}
	}

	return 0;	
}