// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	
	vector<string> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	string pw; cin >> pw;

	sort(begin(a),end(a),[](auto a,auto b){
		return a.size() < b.size();
	});

	int mn = 0 , mx = 0;

	bool mnfound = 0;

	for (int i=0;i<n;i++) {
		if (a[i].size() == pw.size() && mnfound == 0) {
			mn += (i + 1);
			mnfound = 1;
		}
		if (i == n-1 || a[i+1].size() > pw.size()) {
			mx += (i+1);
			break;
		}
		if ((i+1) % k == 0) mx += 5;
		if ((i+1) % k == 0 && mnfound == 0) mn += 5;
	}

	cout << mn << " " << mx;

	return 0;
}

