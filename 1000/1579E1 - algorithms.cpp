// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		list<int> a;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x < a.front()) {
				a.push_front(x);
			} else {
				a.push_back(x);
			}
		}
		for (auto itr = a.begin(); itr != a.end(); itr++) cout << *itr << " ";
		cout << '\n';
		
	}

	return 0;
}
