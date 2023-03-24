// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	vector<bool> ref(n+1);
	int p = n;
	for (int i=0;i<n;i++) {
		ref[a[i]] = 1;
		if (a[i] != p) {
			cout << '\n';
			continue;
		}
		for (int j=p;j>=0;j--){
			if (ref[j] == 0) {
				p = j;
				break;
			}
			cout << j << " ";
		}
		cout << '\n';
	}	

	return 0;
}

