// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , w; cin >> n >> w;
		vector<int> a;
		int p = 1;
		while (p <= 1000000) {
			a.push_back(p);
			p <<= 1;
		}

		vector<int> c(a.size());
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			for (int j=0;j<a.size();j++) if (a[j] == x) c[j]++;
		}
		
		int height = 0;
		while (1) { 
			int biggest = -1; // while blocks still exist
			for (int j=a.size()-1;j>=0;j--) {
				if (c[j] > 0) {
					biggest = a[j];
					c[j]--;
					break;
				}
			}
			if (biggest == -1) break;
			height++;
			int space = w - biggest;
			for (int j=a.size()-1;j>=0;j--) {
				while (space-a[j] >= 0 && c[j] > 0) {
					space -= a[j];
					c[j]--;
				}
			}
		}
		cout << height << '\n';

	}

	return 0;	
		
}