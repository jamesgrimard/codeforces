// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int hh = stoi(s.substr(0,2)), mm = stoi(s.substr(3,2));

	while (1) {
		if (mm == 59) hh = (hh + 1) % 24;
		mm = (mm + 1) % 60;
		string a = "" , b = "";
		(hh < 10) ? a = "0" + to_string(hh) : a = to_string(hh);
		(mm < 10) ? b = "0" + to_string(mm) : b = to_string(mm);
		if (a[0] == b[1] && b[0] == a[1]) {
			cout << a << ":" << b;
			break;
		}
	}
	

	return 0;
}

