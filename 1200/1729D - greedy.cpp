// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<int> d,id;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x - a[i] >= 0) {
				id.push_back(x-a[i]);
			} else {
				d.push_back(abs(x-a[i]));
			}
		}
		sort(rbegin(d),rend(d));
		sort(rbegin(id),rend(id));
		int id_index = 0;
		int cnt = 0;
		if (id.size() < 1) {
			cout << 0 << '\n';
			continue;
		}
		for (int i=0;i<d.size();i++) {
			if (d[i] <= id[id_index]) {
				cnt++;
				id_index++;
			}
			if (id_index == id.size()) break;
		}
		cout << cnt + (id.size()-id_index)/2 << '\n';
	}

	return 0;
}