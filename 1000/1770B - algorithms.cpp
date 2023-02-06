// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	
	while (tt--) {
		
		int n , k; cin >> n >> k;
		vector<int> a; int count = 1;
		for (int i=n;i>=1;i--){
			if (size(a) < n && n-i != 0 && (n-i) % max(k-1,1) == 0) {
				a.push_back(count); count++;
			}
			if (size(a) < n) {
				a.push_back(i);
			}
		}
		for (int i=0;i<size(a);i++) cout << a[i] << " ";
		cout << '\n';
	}

	return 0;
}

