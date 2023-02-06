// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<char> a;

	for (int i=1;i<=100000;i++) {
		string s = to_string(i);
		for (int j=0;j<size(s);j++) a.push_back(s[j]);
	}
	

	int n; cin >> n;
	cout << a[n-1];


	return 0;
}