// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		long long total = 0;
		for (int i=0;i<n;i++) {
			(s[i] == 'L') ? total += i : total += n-1-i;
		}
		vector<long long> a;
		for (int i=0;i<n/2;i++) {
			if (s[i] == 'L') {
				total += (n-1-i-i);
				a.push_back(total);
			}
			if (s[n-1-i] == 'R') {
				total += ((n-1-i)-((n-1)-(n-1-i)));
				a.push_back(total);
			}
		}
		if (size(a) == 0) a.push_back(total);
		for (int i=0;i<n;i++) {
			(i >= size(a)) ? cout << a[size(a)-1] << " " : cout << a[i] << " ";
		}

		cout << '\n';
	}


	return 0;
}

