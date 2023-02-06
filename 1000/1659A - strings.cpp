// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , a , b; cin >> n >> a >> b;
		int mode = a % (b+1);
		int largest = a/(b+1);
		if (mode > 0) largest++;
		int normal = (b+1) - mode;
		string S = "" , SS = "";
		string s = "";
		for (int i=0;i<largest;i++) S += "R";
		for (int i=0;i<a/(b+1);i++) SS += "R";
		if (size(S) > 0) S += "B";
		if (size(SS) > 0) SS += "B";
		for (int i=0;i<mode;i++) s += S;
		for (int i=0;i<(b+1)-mode;i++) s += SS;
		cout << s.substr(0,size(s)-1) << '\n';

	}


	return 0;
}
