// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	
 	int h1,a1,p,h2,a2; cin >> h1 >> a1 >> p >> h2 >> a2;
 	vector<string> s;
	while (h2 > 0) {
		if (h2 > a1 && h1 <= a2) {
			h1 += (p-a2);
			s.push_back("HEAL");
			continue;
		}
		h2 -= a1;
		h1 -= a2;
		s.push_back("STRIKE");
	}
	cout << s.size() << '\n';
	for (auto v:s) cout << v << '\n';

	return 0;	
}

		