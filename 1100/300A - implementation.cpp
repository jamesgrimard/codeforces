// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int N; cin >> N;
	vector<int> p,n,o;
	for (int i=0;i<N;i++) {
		int x; cin >> x;
		if (x < 0) {
			n.push_back(x);
		} else if (x > 0) {
			p.push_back(x);
		} else {
			o.push_back(x);
		}
	}

	int f = 0;

	if (p.size() == 0) {
		p.push_back(n[0]);
		p.push_back(n[1]);
		f = 2;
		if ((n.size()-2) % 2 == 0) {
			o.push_back(n[2]);
			f = 3;
		}
	} else if (n.size() % 2 == 0) {
		o.push_back(n[0]);
		f = 1;
	}

	cout << n.size() - f;
	for (int i=f;i<n.size();i++) cout << " " << n[i];
	cout << '\n';
	cout << p.size();
	for (int i=0;i<p.size();i++) cout << " " << p[i];	
	cout << '\n';
	cout << o.size();
	for (int i=0;i<o.size();i++) cout << " " << o[i];

	

	return 0;
}
