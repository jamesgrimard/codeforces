// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);


	int n , k; cin >> n >> k;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(rbegin(a),rend(a));

	cout << a[k-1].first << '\n';
	for (int i=0;i<k;i++) cout << a[i].second << " ";

	return 0;
}