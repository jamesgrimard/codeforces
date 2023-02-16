// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int k; cin >> k;
	int mx = 0;
	vector<int> a(26);
	for (int i=0;i<26;i++) {
		cin >> a[i];
		mx = max(mx,a[i]);
	}
	long long sum = 0;
	for (int i=size(s)+1;i<=size(s)+k;i++) {
		sum += (i * mx);
	}

	for (int i=0;i<size(s);i++) {
		sum += (a[s[i] - 'a'] * (i + 1));
	}

	cout << sum;


	return 0;
}



