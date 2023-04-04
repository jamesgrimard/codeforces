// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	vector<char> a(26);
	for (int i=0;i<26;i++) a[i] = char(97+i);

	int n; cin >> n;
	for (int i=0;i<n;i++) {
		cout << a[i%4];
	}


	return 0;
}
