// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {

		int n; cin >> n;
		vector<int> a(n);
		int mn = 0 , index = 0 ;
		for (int i=0;i<n;i++) cin >> a[i];
		sort(begin(a),end(a));
		for (int i=1;i<n;i++) {
			if (a[i] - a[i-1] <= mn || i == 1) {
				mn = a[i] - a[i-1];
				index = i;
			}
		}
		cout << a[index-1] << " ";

		bool F = 0 , FF = 0;
		int I= -1;
		for (int i=0;i<n;i++) {
			if (a[i] < a[index-1]) continue;
			if (I == -1) I = i;
			if (a[i] == a[index-1] && F == 0) {
				F = 1;
				continue;
			}
			if (a[i] == a[index] && FF == 0) {
				FF = 1;
				continue;
			}
			cout << a[i] << " ";
		}
		for (int i=0;i<I;i++) {
			if (a[i] == a[index-1] && F == 0) {
				F = 1;
				continue;
			}
			if (a[i] == a[index] && FF == 0) {
				FF = 1;
				continue;
			}
			cout << a[i] << " ";
		}
		cout << a[index] << '\n';
	}
	
	return 0;
}