// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int n = s.size();
	vector<int> a(n),b(n),o;
	for (int i=0;i<n;i++) {
		if (i > 0) a[i] = a[i-1];
		if (s[i] == '(') a[i]++;
	}
	for (int i=n-1;i>=0;i--) {
		if (i < n-1) b[i] = b[i+1];
		if (s[i] == ')') b[i]++;
	}
	for (int i=0;i<n;i++) {
		if ((i == 0 || a[i] != a[i-1]) && a[i] <= b[i] && a[i] > 0) o.push_back(i+1);
		if ((i == n-1 || b[i] != b[i+1]) && b[i] <= a[i] && b[i] > 0) o.push_back(i+1);
	}
	
	if (o.size() == 0) {
		cout << 0 << '\n';
		return 0;
	}
	cout << 1 << '\n';
	cout << o.size() << '\n';
	for (auto v:o) cout << v << " ";
	cout << '\n';

	return 0;
}