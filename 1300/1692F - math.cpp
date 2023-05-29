// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(10);
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			a[x%10]++;
		}
		bool ans = 0;
		for (int i=0;i<10;i++) {
			a[i]--;
			for (int j=0;j<10;j++) {
				a[j]--;
				for (int k=0;k<10;k++) {
					a[k]--;
					if (a[i] >= 0 && a[j] >= 0 && a[k] >= 0 && (i+j+k) % 10 == 3) ans = 1;
					a[k]++;
				}
				a[j]++;
			}
			a[i]++;
		}
		ans == 1 ?  cout << "Yes\n" : cout << "No\n";
	}


	return 0;	
}