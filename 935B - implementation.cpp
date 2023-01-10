// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s;cin >> s;

	vector<int> a(n); 

	if (s[0] == 'U') a[0] = 1; if (s[0] == 'R') a[0] = -1;

	for (int i=1;i<n;i++) {
		(s[i] == 'U') ? a[i]= a[i-1]+1 : a[i]= a[i-1]-1;
	}

	int tally = 0;

	for (int i=2;i<n;i++) {
		if ((a[i-2] < 0 && a[i] > 0) || (a[i-2] > 0 && a[i] < 0)) tally++;
	}

	cout << tally << '\n';

	//for (int i=0;i<n;i++) cout << a[i] << " ";

	return 0;
}

