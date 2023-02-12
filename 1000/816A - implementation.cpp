// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	string a = s.substr(0,2) , b = s.substr(3,2) , bc = b;
	reverse(begin(bc),end(bc));
	int count = 0;

	while (a != bc) {
		int mm = stoi(b) , hh = stoi(a);
		if (mm + 1 >= 60) hh = (hh + 1) % 24;
		mm = (mm + 1) % 60;
		a = to_string(hh);
		b = to_string(mm);
		if (hh < 10) a = "0" + a;
		if (mm < 10) b = "0" + b;
		count++;
		bc = b;
		reverse(begin(bc),end(bc));
		
	}

	cout << count;


	return 0;
}



