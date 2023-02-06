// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string a , b ; cin >> a >> b;

	int ind_a = 0, ind_b = 0;

	for (int i=0;i<size(a);i++) {
		if (a[i] != '0')  {
			ind_a = i; break;
		}
		if (i == size(a)-1) a= '0';
	}
	for (int i=0;i<size(b);i++) {
		if (b[i] != '0') {
			ind_b = i; break;
		}
		if (i == size(b)-1) b = '0';
	}

	a = a.substr(ind_a,size(a)-ind_a);
	b = b.substr(ind_b,size(b)-ind_b);


	if (size(a) > size(b)) {
		cout << ">";
	} else if (size(a) < size(b)) {
		cout << "<";
	} else {
		for (int i=0;i<size(a);i++) {
			if (a[i] > b[i]) {
				cout << ">"; return 0;
			} else if (a[i] < b[i]) {
				cout << "<"; return 0;
			}
		}
		cout << "=";
	}


	return 0;
}

