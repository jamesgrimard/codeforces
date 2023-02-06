// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k;cin >> n >> k;
	int pos = 0 , neg = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		(a[i] == -1) ? neg++ : pos++;
	}
	int mx = 0;
	for (int i=0;i<k;i++) {
		int P = 0 , N = 0;
		for (int j=i;j<n;j+=k) {
			(a[j] == -1) ? N++ : P++;
		}
		mx = max(mx,abs((neg-N)-(pos-P)));
	}
	cout<< mx;

	return 0;
}