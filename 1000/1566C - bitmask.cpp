// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		string a , b ; cin >> a >> b;
		int count = 0;
		for (int i=0;i<n;i++){
			if ((a[i]^b[i]) == 1) {
				count +=2; continue;
			}
			if (i < n-1 && a[i] == '1' && b[i] == '1' && (a[i+1]&b[i+1]) == '0') {
				count +=2; i++; continue;
			}
			if (i < n-1 && a[i] == '0' && b[i] == '0' && (a[i+1]&b[i+1]) == '1') {
				count +=2; i++; continue;
			}
			if (a[i] == '0' && b[i] == '0') {
				count++;
			}
		}
		cout << count << '\n';
	}

	return 0;
}
