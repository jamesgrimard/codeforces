// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a , b; cin >> a >> b;

	sort(rbegin(b),rend(b));
	int last = 0;
	for (int j=0;j<b.size();j++) {
		for (int i=last;i<a.size();i++) {
			if (b[j] > a[i]) {
				swap(b[j] , a[i]);
				last = i + 1;
				break;
			}
			if (i == a.size()-1) goto out;
		}
	}
	
	out: cout << a;

	return 0;
}
