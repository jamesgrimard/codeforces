// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<string> r,wc,m,c;

	for (int i=0;i<n;i++) {
		string name , rank; cin >> name >> rank;
		if (rank == "rat") r.push_back(name);
		if (rank == "woman" || rank == "child") wc.push_back(name);
		if (rank == "man") m.push_back(name);
		if (rank == "captain") c.push_back(name);
	}

	for (int i=0;i<size(r);i++) cout << r[i] << '\n';
	for (int i=0;i<size(wc);i++) cout << wc[i] << '\n';
	for (int i=0;i<size(m);i++) cout << m[i] << '\n';
	for (int i=0;i<size(c);i++) cout << c[i] << '\n';

	return 0;
}

